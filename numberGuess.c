/* 
Raphael Napinas
First In Class
Number Guessing Games

OUTLINE
1. Outer Loop Menu Screen
2. Check if user wants to change max number
3. Randomly generate number between 1 and max
4. Get the user's guess and keep checking if it's correct
5. Ask to play again and show menu screen
6. Once they choose option 3, exit loop and end program

**
To save the users request for max number, I will write it into a file 
to be read at the start of the program.
**

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int keepPlaying = 1, maxNumber = 0, target = 0, guess = 0;
    
    // Reads in what is in the max number file to be maxNumber
    FILE *numFile;
    numFile = fopen("maxUserNumber.txt", "r");
    fscanf(numFile, "%d", &maxNumber);
    fclose(numFile);
    // Closes file

    // Start Menu
    printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
    scanf("%d", &keepPlaying);

    while(keepPlaying < 1 && keepPlaying > 3)
    {
        printf("Please pick a valid option.\n");
        printf("Press 1 to play a game\nPress 2 to change the max number\nPress 3 to quit\n");
        scanf("%d", &keepPlaying);
    }
    
    // Main loop
    while (keepPlaying != 3)
    {
        // Change Max Number
        if (keepPlaying == 2)
        {
            printf("The current max number is %d.\nWhat would you like to change it to: ", maxNumber);
            scanf("%d", &maxNumber);

            while (maxNumber < 1 || maxNumber > INT_MAX)
            {
                printf("Please pick a positive number less than 2147483647\n");
                printf("The current max number is %d.\nWhat would you like to change it to: ", maxNumber);
                scanf("%d", &maxNumber);
            }
        }

        printf("Let's Play the Guessing Game!\n\n");
        // Generate random target
        target = (rand() % maxNumber) + 1;
        printf("A random number has been chosen!\nThis number is between 1 and %d\n\n", maxNumber);

        // Repeatedly guess until correct
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
                printf("Your guess was smaller than target! Try higher!\n\n");
            }
            else
            {
                printf("Your guess was bigger than the target! Try lower!\n\n");
            }
        }

        // Ask to play again
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

    // End program
    printf("Thanks for playing!");

    // Opens and clears file
    numFile = fopen("maxUserNumber.txt", "w+");
    fprintf(numFile, "%d\n", maxNumber); // Writes new maxNumber into file
    fclose(numFile); // Closes file

    return 0;
}