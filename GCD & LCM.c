#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int c = (a < 0) ? -a : a;
    int d = (b < 0) ? -b : b;

    while (c != d) {
        if (c > d)
            c -= d;
        else
            d -= c;
    }

    printf("GCD(%d, %d) = %d\n", a, b, c);
    printf("LCM(%d, %d) = %d\n", a, b, (a * b) / c);

    return 0;
}
