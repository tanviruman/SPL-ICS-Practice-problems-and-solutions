#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter Three angles:");
 scanf("%d%d%d",&a,&b,&c);
 if(a>0 && b>0 && c>0 && a+b+c==180)
    printf("Yes");
 else
    printf("No");
 return 0;
}
