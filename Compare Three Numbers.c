#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("Largest = ");

    if (a > b) {
        if (a > c) {
            printf("%d\n", a);
        } else {
            printf("%d\n", c);
        }
    } else {
        if (b > c) {
            printf("%d\n", b);
        } else {
            printf("%d\n", c);
        }
    }

    return 0;
}
