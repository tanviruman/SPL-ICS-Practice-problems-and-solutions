#include <stdio.h>
int main() {
int N, i, factorial = 1;
printf("Enter a number: ");
scanf("%d", &N);
printf("%d! = ", N);

for (i = N; i >= 1; i--) {
printf("%d", i);
factorial *= i;

if (i != 1) {
printf(" X ");
}
}

printf(" = %d\n", factorial);
return 0;
}
