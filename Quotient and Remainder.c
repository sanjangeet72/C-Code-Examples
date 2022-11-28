#include <stdio.h>

int main() {
    int a, b;

    printf("Enter a, b: ");
    scanf("%d", &a);
    scanf("%d", &b);

    int q = a % b;
    a -= q;

    printf("Quotient = %d\n", a / b);
    printf("Remainder = %d\n", q);

    return 0;
}
