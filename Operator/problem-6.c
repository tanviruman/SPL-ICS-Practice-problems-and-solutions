#include<stdio.h>
int main()
{
    int X=56;
    int Y=10;

    X*=Y;
    printf("Multiplication =%d\n",X);

    X=56;
    X/=Y;
    printf("Division =%d\n",X);
    return 0;
}
