#include <stdio.h>

int main() {
    int n = 10;

    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
