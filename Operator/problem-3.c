#include<stdio.h>
int main()
{
    double a,b;
    printf("Enter two numbers:");
    scanf("%lf %lf",&a,&b);

  double X=(3.31*a*a+2.01*b*b*b)/(7.16*b*b+2.01*a*a*a);
  printf("X=%lf",X);

   return 0 ;
}
