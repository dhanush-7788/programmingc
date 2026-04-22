#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr;  // same as &arr[0]

    printf("Address of first element: %p\n", ptr);
    printf("Value at first element: %d\n", *ptr);

    return 0;
}