#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 
1. Greet the user and briefly explain the program.

2. Create random meal cost by assigning the four meals a value between 0 and 3. 
        We will generate a random number between 0 and 3 and choose the 
        corresponding meal.

3. Prompt the user for tax and tip to be entered as a percent.
        Multiply both by .01 to get the percent as a decimal.

5. Multiply these two values by the meal cost.

6. Add these totals and print this sum to screen.
        Also print the meal cost, tax, and tip individually.
*/

int mealPicker();

int mealPicker()
    {
        time_t t;

        srand((unsigned)time(&t)); //Set our random generation based on time.

        int entree = (rand() % 4); //This will generate a random number between 0 and 3.

        return entree;
    }

int main()
{
    printf("\nHello. This program will generate a restaurant bill with tax and tip provided by you.");

    printf("\nFirst let's pick a random meal. The possible meals are...");

    printf("\n\nSalad: $9.95");
    printf("\nSoup: $4.55");
    printf("\nSandwich: $13.25");
    printf("\nPizza: $22.35\n");

    int meal;
    float mealCost;

    //MEAL IS RANDOMLY PICKED
    meal = mealPicker();

    if (meal == 0) // Salad Option - $9.95
    {
        mealCost = 9.95;
        printf("\nGenerated Meal: Salad\n");
    }

    else if ( meal == 1) //Soup Option - $4.55
    {
        mealCost = 4.55;
        printf("\nGenerated Meal: Soup\n");
    }

    else if ( meal == 2) //Sandwich Option - $13.25
    {
        mealCost = 13.25;
        printf("\nGenerated Meal: Sandwich\n");
    }

    else if (meal == 3) //Pizza - $22.35
    {
        mealCost = 22.35;
        printf("\nGenerated Meal: Pizza\n");
    }

    printf("\nYour meal will cost $%.2f.\n", mealCost);
    printf("\nPlease enter the amount you would like to tip as a percentage.");
    printf("\nFor example, to enter a 20%% tip, simply enter \"20\"\n");


    //TIP
    float tip; //Float so we can multiply by .01 and add to total later

    scanf("%f", &tip);

    while (tip < 0.0) //Do not allow negative inputs
    {
        printf("Please enter a valid number. No negatives.\n");
        scanf("%f", &tip);
    }

    tip *= 0.01; //This will give us the decimal version of tip
    tip *= mealCost; //Multiply tip by meal cost to get the tip

    printf("\nThank you! Now please enter the tax rate as a percentage. ");
    printf("Same rules as tip. For example, to enter 8%% tax, simply enter \"8\"\n");


    //TAX
    float tax; //Float so we can multiply by .01 and add to total later

    scanf("%f", &tax); 

    while (tip < 0.0) //Do not allow negative inputs
    {
        printf("Please enter a valid number. No negatives.\n");
        scanf("%f", &tax);
    }

    tax *= 0.01; //This will give us the decimal version of tax
    tax *= mealCost; //Multiply meal cost by tax to get the tax

    //TOTAL COST
    float total = mealCost + tip + tax;
    printf("\nThus, your total cost is $%.2f.", total);
    printf("\nCost Breakdown...");
    printf("\nTax:  $%.2f \nTip:  $%.2f \nMeal: $%.2f", tax, tip, mealCost);








}