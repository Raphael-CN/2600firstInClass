/* 
Raphael Napinas
First In Class
Restaurant Bill

OUTLINE:
1. Get a random number from 0-3.
2. Each number will represent a different meal.
3. Add the ranomly selected meal's price to the bill.
4. Ask for input for tax and tip. (Tax will be in percent so must convert it to decimal.)
5. Calculate the total bill and display the final cost.
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

    printf("What is the tax percentage: "); // Treat as %, not as decimal.
    scanf("%f", &tax);
    printf("What is your tip: ");
    scanf("%f", &tip);
    
    float taxDecimal = tax / 100; // Turn tax percentage into decimal

    printf("\nFINAL BILL:\n"); // Displaying final outputs
    printf("Meal Cost: %.2f\n", bill);
    printf("Tax: %.2f% Tip: $%.2f\n", tax, tip);
    printf("\nTotal Bill with Tax and Tip: $%.2f", bill + (bill * taxDecimal) + tip);

    return 0;
}