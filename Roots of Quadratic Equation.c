#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Quadratic Equation: a(x**2) + bx + c == 0\n");
    printf("Enter a, b, c: ");

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int d = (b*b) - (4*a*c);

    if (d >= 0) {
        float e = sqrt(d);

        printf("x1 = %f\n", (-b + e) / (2 * a));
        printf("x2 = %f\n", (-b - e) / (2 * a));
    } else {
        float e = sqrt(-d) / (2 * a);
        float g = -b / (2 * a);

        printf("x1 = %f+%fi\n", g, e);
        printf("x2 = %f-%fi\n", g, e);
    }

    return 0;
}
