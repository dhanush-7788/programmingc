#include <stdio.h>

void test() {
    static int count = 0;  // static variable
    count++;
    printf("Count = %d\n", count);
}

int main() {
    test();
    test();
    test();
    return 0;
}