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
    float bill = 0.00;
    time_t t;
    srand((unsigned) time(&t));

    int meal = rand() % 4;
    printf("%d\n", meal);

    if(meal == 0)
    {
        bill += 9.95; // Salad
        printf("Your Bill: Salad - $9.95");
    }
    else if (meal == 1)
    {
        bill += 4.55; // Soup
        printf("Your Bill: Soup - $4.55");
    }
    else if (meal == 2)
    {
        bill += 13.25; // Sandwich
        printf("Your Bill: Sandwich - $13.25");
    }
    else
    {
        bill += 22.35; // Pizza
        printf("Your Bill: Pizza - $22.35");
    }

    

    
    return 0;
}