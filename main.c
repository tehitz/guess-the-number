#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    time_t t;
    srand((unsigned) time(&t));

    int randomNumber = rand() % 21;
    int guess = 0;
    int tries = 1;
    int triesLeft = 5;

    printf("######################\nGuess the number game! \n#######################\nGuess the number between 1-20, you have five tries.\n\n");


    while(tries < 6) {


        printf("Try number %d!\n\n", tries);
        printf("You have %d tries left.\nGuess a number: ", triesLeft);
        scanf("%d", &guess);

        if (guess == randomNumber) {
            printf("Congratulations! You won! \n");
            tries++;
            triesLeft--;
            break;
        }

        else if (guess != randomNumber && guess > 0 && guess <= 20) {

            if (guess < randomNumber) {
                printf("\nThe number is higher.\n\n");
            }

            else if (guess > randomNumber) {
                printf("\nThe number is lower.\n\n");
            }
            tries++;
            triesLeft--;
        }

        else {
            printf("False input! Try again!\n");
            continue;
        }

    }

    if (guess != randomNumber) {
        printf("You lost. :( ");
    }




}