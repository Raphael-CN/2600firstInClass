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

        printf("Let's Play the Guessing Game!\n");
        target = rand() % maxNumber + 1;
        printf("A random number has been chosen!\nThis number is between 1 and %d\n", maxNumber);
    }

    printf("Thanks for playing!");

    return 0;
}