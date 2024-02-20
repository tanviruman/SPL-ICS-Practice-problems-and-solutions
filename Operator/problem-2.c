#include<stdio.h>
#define Pi 3.1416
int main()
{
    double A;
    double r;

    printf("Enter the radius of the circle:");
    scanf("%lf",&r);

    A=2*Pi*r;

    printf("Area:%lf",A);

    return 0;
}
