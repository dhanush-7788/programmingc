#include <stdio.h>

int main() {
    int n, i;
    
    // Ask user for size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  // Declare array of size n

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display elements
    printf("You entered:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Example: Calculate sum
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("\nSum of elements = %d\n", sum);

    return 0;
}
