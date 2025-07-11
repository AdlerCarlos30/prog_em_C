#include <stdio.h>

int main() {
    int x;

    for(x = 1; x <= 50; x++) {
        if(x % 3 == 0) {
            printf("%d\n", x);
        }
    }
    return 0;
}