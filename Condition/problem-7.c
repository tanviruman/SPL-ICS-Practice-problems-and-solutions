#include<stdio.h>
int main()
{
    int X,Y;
    printf("Enter Two Number:");
    scanf("%d%d",&X,&Y);
    if(X>Y)
    printf("%d is greater than %d",X,Y);
    else if(X<Y)
    printf("%d is less than %d",X,Y);
    else
    printf("%d is equal to %d",X,Y);
    return 0;
}
