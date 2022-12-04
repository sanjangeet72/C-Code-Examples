#include <stdio.h>

int main() {
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf", &a);
    scanf("%lf", &b);

    double sum = a + b;
    double avg = sum / 2;

    printf("Sum = %lf\n", sum);
    printf("Average = %lf\n", avg);

    return 0;
}
