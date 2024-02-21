#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Character:");
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'||ch>='a'&& ch<='z')
        printf("Alpabet\n");
    else if (ch>='0'&& ch<='9')
        printf("Digit\n");
    else
        printf("Special");
    return 0 ;
}
