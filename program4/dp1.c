#include <stdio.h>

// Function to demonstrate pass by value
void modifyValue(int x) {
    x = x + 10;
    printf("Value inside function: %d\n", x);
}

int main() {
    int num = 5;

    printf("Original value before function call: %d\n", num);

    modifyValue(num);  // Passing value

    printf("Original value after function call: %d\n", num);

    return 0;
}