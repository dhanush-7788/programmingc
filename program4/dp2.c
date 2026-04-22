#include <stdio.h>

void changeValue(int x) {
    x = 100;
    printf("Inside function: x = %d\n", x);
}

int main() {
    int a = 10;
    changeValue(a);
    printf("Outside function: a = %d\n", a);
    return 0;
}