/* 
Raphael Napinas
First In Class
Restaurant Bill
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    float bill = 0.00, tax = 0.00, tip = 0.00;
    time_t t;
    srand((unsigned) time(&t));

    int meal = rand() % 4;

    if(meal == 0)
    {
        bill += 9.95; // Salad
        printf("Your Meal: Salad - $9.95\n");
    }
    else if (meal == 1)
    {
        bill += 4.55; // Soup
        printf("Your Meal: Soup - $4.55\n");
    }
    else if (meal == 2)
    {
        bill += 13.25; // Sandwich
        printf("Your Meal: Sandwich - $13.25\n");
    }
    else
    {
        bill += 22.35; // Pizza
        printf("Your Meal: Pizza - $22.35\n");
    }

    printf("What is the tax percentage: ");
    scanf("%f", &tax);
    printf("What is your tip: ");
    scanf("%f", &tip);
    
    float taxPercent = tax / 100;

    printf("\nFINAL BILL:\n");
    printf("Meal Cost: %.2f\n", bill);
    printf("Tax: %.2f% Tip: $%.2f\n", tax, tip);
    printf("\nTotal Bill with Tax and Tip: $%.2f", bill + (bill * taxPercent) + tip);

    return 0;
}