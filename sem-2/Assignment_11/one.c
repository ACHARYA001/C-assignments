#include <stdio.h>
#include <math.h>

#define EPSILON 0.00001 // Tolerance for convergence

double function(double x) {
    return pow(x, 3) + 3 * x - 5;
}

double bisection(double a, double b) {
    double c;
    int iteration = 0;

    if (function(a) * function(b) >= 0) {
        printf("Root is not within the given interval.\n");
        return 0;
    }

    while ((b - a) >= EPSILON) {
        c = (a + b) / 2;

        if (function(c) == 0.0) {
            printf("Root found at iteration %d\n", iteration);
            return c;
        } else if (function(c) * function(a) < 0) {
            b = c;
        } else {
            a = c;
        }

        iteration++;
    }

    printf("Root found at iteration %d\n", iteration);
    return c;
}

int main() {
    double a, b;
    printf("Enter the interval [a, b]: ");
    scanf("%lf %lf", &a, &b);

    double root = bisection(a, b);
    printf("Approximate root: %lf\n", root);

    return 0;
}

