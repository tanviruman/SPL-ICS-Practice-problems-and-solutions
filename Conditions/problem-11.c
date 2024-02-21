#include <stdio.h>
int main() {
double finalScore;

printf("Enter the final score: ");
scanf("%lf", &finalScore);

if (finalScore >= 90) {
printf("Grade: A\n");
}
else if (finalScore >= 86) {
printf("Grade: A-\n");
}
else if (finalScore >= 82) {
printf("Grade: B+\n");
}
else if (finalScore >= 78) {
printf("Grade: B\n");
}
else if (finalScore >= 74) {
printf("Grade: B-\n");
}
else if (finalScore >= 70) {
printf("Grade: C+\n");
}
else if (finalScore >= 66) {
printf("Grade: C\n");
}
else if (finalScore >=62) {
printf("Grade: C-\n");
}
else if (finalScore >= 58) {
printf("Grade: D+\n");
}
else if (finalScore >= 55) {
printf("Grade: D\n");
}
else {
printf("Grade: F\n");
}

return 0;
}
