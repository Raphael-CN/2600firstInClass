/* 
Raphael Napinas
First In Class
Number Guessing Games
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int keepPlaying = 1, maxNumber = 10, target = 0, guess = 0;

    // Main loop
    while (keepPlaying != 3)
    {
        if (keepPlaying == 2)
        {
            // change max number
        }

        printf("Let's Play the Guessing Game!\n\n");

        target = (rand() % maxNumber) + 1;
        printf("A random number has been chosen!\nThis number is between 1 and %d\n\n", maxNumber);

        while (guess != target)
        {
            printf("Guess a number between 1 and %d: ", maxNumber);
            scanf("%d", &guess);

            if (guess == target)
            {
                printf("Correct! You guessed the number!\n\n");
            }
            else if (guess < target)
            {
                printf("Your guess was smaller than target! Try again!\n\n");
            }
            else
            {
                printf("Your guess was bigger than the target! Try again!\n\n");
            }
        }

        printf("Do you want to play again?\n");
        printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
        scanf("%d", &keepPlaying);

        while(keepPlaying < 1 && keepPlaying > 3)
        {
            printf("Please pick a valid option.\n");
            printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
            scanf("%d", &keepPlaying);
        }
    }

    printf("Thanks for playing!");

    return 0;
}