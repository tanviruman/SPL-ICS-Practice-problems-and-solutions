#include<stdio.h>
int main()
{
   double number ;
   printf("Enter a number:");
   scanf("%lf",&number);
   if(number>=0)
    printf("Positive");
   else
    printf("Negative");
   return 0;
}
