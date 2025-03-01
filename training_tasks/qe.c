
// quadratic equations

#include <stdio.h>
#include <math.h>

double discrim(double a, double b, double c) {
    return b*b - 4*a*c;
}

int main () {
    double p, q, r, d;
    int n;
    n = scanf("%lf %lf %lf", &p, &q, &r);
    if (n != 3) {
        printf("Error: Freak\n");
        return 1;
    }
    if (p == 0) {
        printf("Error: It is not a quadratic equation freak\n");
        return 2;
    }
    d = discrim(p, q, r);
    if (d < 0) {
        printf("Answer: No roots\n");
        return 0;
    }
    d = sqrt(d);
    printf("Answer: %.5f %.5f\n", (-q-d)/(2*p), (-q+d)/(2*p));
    return 0;
}
