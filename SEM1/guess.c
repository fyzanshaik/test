#include <stdio.h>
#include <stdlib.h>

void main() {
    int random_number = rand() % 10,guess,value;
    int try;
    char y[10] = "y";
  while(1){
    printf("Guess a number between 1 and 10:  ");
    scanf("%d",&guess);
    if (guess > 10){
        printf("Entered data is out of range, try again!");
        continue;
    }
    else if (guess < random_number){
        printf("Too low try again\n");
        continue;
    }
    else if (guess > random_number){
        printf("Too high try again\n");
        continue;
    }
    else if (random_number == guess){
        printf("You guessed it right it was %d \n",random_number);
        //break;
    }
    printf("Do you want to play again? (0/1): ");
    scanf("%d",&try);
    if (try == 0){
        continue;
    }
    else {
        break;
    }
  }
  printf("Thanks for playing!");
}