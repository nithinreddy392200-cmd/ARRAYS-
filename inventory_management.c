#include <stdio.h>
#include <string.h>

int main() {
    int stock[5] = {10, 20, 15, 8, 12};
    char items[5][20] = {"Apples", "Bananas", "Oranges", "Mangoes", "Grapes"};
    int choice, qty, i;

    printf("Inventory Management System\n");
    printf("Items available:\n");
    for(i = 0; i < 5; i++) {
        printf("%d. %s - %d\n", i+1, items[i], stock[i]);
    }

    printf("Enter item number to purchase: ");
    scanf("%d", &choice);
    printf("Enter quantity: ");
    scanf("%d", &qty);

    if(choice >=1 && choice <=5) {
        if(stock[choice-1] >= qty) {
            stock[choice-1] -= qty;
            printf("Purchase successful!\n");
        } else {
            printf("Insufficient stock!\n");
        }
    } else {
        printf("Invalid choice!\n");
    }

    printf("Updated Inventory:\n");
    for(i = 0; i < 5; i++) {
        printf("%s - %d\n", items