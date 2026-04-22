#include <stdio.h>

int main() {
    int i;

    for(i = 1; i <= 10; i++) {
        if(i == 5) {
            break;  // exits the loop when i = 5
        }
        printf("%d ", i);
    }

    return 0;
}