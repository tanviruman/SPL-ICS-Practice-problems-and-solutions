#include <stdio.h>
int main() {
unsigned int a;
printf("Enter a positive nonzero number: ");
scanf("%u", &a);
if (a > 0 && (a & (a - 1)) == 0)
printf("YES");
else
printf("NO");
return 0;
}
