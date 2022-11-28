#include <stdio.h>

int f(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return f(n - 1) + f(n - 2);
}

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("nth value in fibonacci series is %d.\n", f(n));

    return 0;
}
