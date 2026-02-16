#include <stdio.h>

int main() {
    int n, i;
    float total = 0;

    printf("Enter number of items purchased: ");
    scanf("%d", &n);

    float prices[n];  // Array to store item prices

    printf("Enter the price of each item:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &prices[i]);   // Store each price in array
    }

    printf("\nItems purchased:\n");
    for(i = 0; i < n; i++) {
        printf("Item %d: ₹%.2f\n", i+1, prices[i]);
        total += prices[i];        // Add each price to total
    }

    printf("\nTotal Bill = ₹%.2f\n", total);

    return 0;
}