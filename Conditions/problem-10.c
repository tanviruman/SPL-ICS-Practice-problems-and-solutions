#include <stdio.h>
int main() {
double num1, num2;
char operator;

printf("Enter an expression ( 7 + 3): ");
scanf("%lf %c %lf", &num1, &operator, &num2);

switch (operator) {
case '+':
printf("ADD: %lf\n", num1 + num2);
break;
case '-':
printf("SUB: %lf\n", num1 - num2);
break;
case '*':
printf("MULTI: %lf\n", num1 * num2);
break;
case '/':
if (num2 != 0) {
printf("DIVI: %lf\n", num1 / num2);
} else {
printf("Zero as divisor is not valid!.\n");
}
break;
default:
printf("Invalid operator.\n");
}

return 0;
}

