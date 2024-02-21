#include <stdio.h>

int main() {
int player1Number, player2Guess, chances = 3, flag = 0;

printf("Player-1, enter a number: ");
scanf("%d", &player1Number);

printf("Player-2, you have 3 chances to guess the number.\n");

while (chances > 0) {
printf("Enter your guess: ");
scanf("%d", &player2Guess);

if (player2Guess == player1Number) {
printf("Right, Player-2 wins!\n");
flag = 1;
break;
} 
else {
chances--;
if (chances > 0) {
printf("Wrong, %d Chance(s) Left!\n", chances);
}
}
}

if (flag == 0) {
printf("Player-1 wins!\n");
}

return 0;
}
