#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    // AND gate training data: inputs (2 features + bias=1), targets
    double inputs[4][3] = {{0, 0, 1}, {0, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int targets[4] = {0, 0, 0, 1};
    
    double weights[3] = {((double)rand() / RAND_MAX) * 2 - 1,
                         ((double)rand() / RAND_MAX) * 2 - 1,
                         ((double)rand() / RAND_MAX) * 2 - 1};  // Random init [-1,1]
    double learning_rate = 0.1;
    double total_error = 1.0;
    int max_epochs = 100;
    int epoch;

    printf("Training perceptron for AND gate...\n");

    for (epoch = 0; epoch < max_epochs && total_error > 0.01; ++epoch) {
        total_error = 0.0;
        for (int i = 0; i < 4; ++i) {
            // Compute weighted sum
            double sum = inputs[i][0] * weights[0] + inputs[i][1] * weights[1] + inputs[i][2] * weights[2];
            int prediction = (sum >= 0) ? 1 : 0;
            int error = targets[i] - prediction;
            
            // Update weights
            weights[0] += learning_rate * error * inputs[i][0];
            weights[1] += learning_rate * error * inputs[i][1];
            weights[2] += learning_rate * error * inputs[i][2];
            
            total_error += abs(error);
        }
        total_error /= 4;  // Average error
    }

    printf("Trained after %d epochs. Final error: %.3f\n", epoch, total_error);
    printf("Weights: w1=%.3f, w2=%.3f, bias=%.3f\n", weights[0], weights[1], weights[2]);

    // Test
    printf("\nTesting:\n");
    for (int i = 0; i < 4; ++i) {
        double sum = inputs[i][0] * weights[0] + inputs[i][1] * weights[1] + inputs[i][2] * weights[2];
        int pred = (sum >= 0) ? 1 : 0;
        printf("Input (%g,%g) -> %d (target: %d) %s\n", inputs[i][0], inputs[i][1], pred, targets[i],
               (pred == targets[i]) ? "✓" : "✗");
    }

    return 0;
}
