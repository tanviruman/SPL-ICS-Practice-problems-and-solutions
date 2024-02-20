#include<stdio.h>
int main()
{
    int integerVar;
    float floatVar;
    char charVar;

    printf("Enter an Integer:");
    scanf("%d",&integerVar);

    printf("Enter a floating point value :");
    scanf("%f",&floatVar);

//Clear the newline character left in the input buffer
while(getchar()!='\n');

    printf("Enter a Character :");
    scanf("%c",&charVar);

    printf("The integer value:%d\n",integerVar);
    printf("The floating point value:%f\n",floatVar);
    printf("The character value:%c\n",charVar);

    return 0;
}
