#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int m = n;
    int x = 1;
    while (m > 9) {
        m = m / 10;
        x++;
    }

    printf("Number of digits = %d", x);

    return 0;
}
