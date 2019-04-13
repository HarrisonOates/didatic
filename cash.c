// Cash
// Harrison Oates
// 13/04/2019
// This is CS50
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int Quarter;
    int Dime;
    int Nickel;
    int Penny;
    int Count = 0;

    float changeInput;

printf("CASH CALCULATOR\n");
    //Prompt user for change input
    do
    {
        changeInput = get_float("Change owed: ");
    }
    while (changeInput < 0);
    
    
// Get cents from the dollar input and rounds
    int cents = round(changeInput * 100);
    
// Get amount of quarters
    for (Quarter = 1; cents >= 25; Quarter++)
    {
        cents -= 25;
        Count += 1;
    }
// Get amount of dimes
    for (Dime = 1; cents >= 10; Dime++)
    {
        cents -= 10;
        Count += 1;
    }
   
// Get amount of nickels
    for (Nickel = 1; cents >= 5; Nickel++)
    {
        cents -= 5;
        Count += 1;
    }
    
// Get amount of pennies
    for (Penny = 1; cents >= 1; Penny++)
    {
        cents -= 1;
        Count += 1;
    }
    
// Print output
    printf("%i\n", Count);


}
