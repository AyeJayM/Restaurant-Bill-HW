#include <stdio.h>
#include <time.h>

/* 
1. Greet the user and briefly explain the program.

2. Create random meal cost by assigning the four meals a value between 0 and 3. 
        We will generate a random number between 0 and 3 and choose the 
        corresponding meal.

3. Prompt the user for tax and tip to be entered as a percent.
        Multiply both by .01 to get the percent as a decimal.

5. Multiply these two values by the total.

6. Add these totals and print this sum to screen.
        Also print the meal cost, tax, and tip individually.
*/

int mealPicker()
    {
        time_t t;

        srand((unsigned)time(&t)); //Set our random generation based on time.

        int entree = (rand() % 4); //This will generate a random number between 0 and 3.

        return entree;
    }

int main()
{
    printf("Hello. This program will generate a restaurant bill with a little info provided by you.");
    printf("\nFirst let's pick a random meal.");

    int meal;
    float mealCost;

    meal = mealPicker();

    if (meal == 0) // Salad Option - $9.95
    {
        mealCost = 9.95;
    }

    else if ( meal == 1) //Soup Option
    {
        mealCost = 4.55;
    }

    else if ( meal == 2) //Sandwhich Option
    {
        mealCost = 13.25;
    }

    else if (meal == 3) //Pizza
    {
        mealCost = 22.35;
    }







}