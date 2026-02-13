#include <stdio.h>

int main() {
    int arr[10], i, j, temp, sum = 0, key, found = 0;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Original array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < 10-1; i++) {
        for(j = i+1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nReversed array:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    for(i = 0; i < 10; i++) sum += arr[i];
    printf("\nSum = %d, Average = %.2f", sum, sum/10.0);
    printf("\nMin = %d, Max = %d", arr[0], arr[9]);
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    for(i = 0; i < 10; i++) {
        if(arr[i] == key) {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Not found\n");
    return 0;
}