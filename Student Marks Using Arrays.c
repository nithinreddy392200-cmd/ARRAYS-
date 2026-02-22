#include <stdio.h>

int main() {
    int marks[5];   // Array to store marks of 5 subjects
    int i, total = 0;
    float average;

    printf("Enter marks of 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    average = total / 5.0;

    printf("\n--- Student Report ---\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }
    printf("Total Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);

    if (average >= 40) {
        printf("Result: PASS\n");
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}