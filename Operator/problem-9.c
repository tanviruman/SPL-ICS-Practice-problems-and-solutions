#include <stdio.h>

int main()
 {
double a, b, c;

printf("Enter values for a, b, and c: ");
scanf("%lf %lf %lf", &a, &b, &c);

double X = a - b / 3.0 + c * 2 - 1;
double Y = a - (b / (3 + c) * 2) - 1;
double Z = a - ((b / 3) + c * 2) - 1;

printf("X: %lf\nY: %lf\nZ: %lf\n", X, Y, Z);

return 0;
}
