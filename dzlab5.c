#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int main() {
    double x = 3.251;
    double y = 0.325;
    double z = 0.0000466;

    double c = pow(2, pow(y, x)) + pow(pow(3, x), y) - (y * (atan(z) - M_PI / 6.0)) / (fabs(x) + 1.0 / (y * y + 1.0));

    printf("x = %.6f\n", x);
    printf("y = %.6f\n", y);
    printf("z = %.10f\n", z);
    printf("c = %.10f\n", c);

    return 0;
}