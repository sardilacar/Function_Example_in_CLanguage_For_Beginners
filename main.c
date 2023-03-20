#include <stdio.h>
#include <stdlib.h>



/// The block is used for user to bring his main values to calculate which type of credit card is presented to user.

float get_inc_scr(char* STR)
{
    float icm_scr;
    float num_converted;

    printf("%s", STR);
    printf("\nBe sure that you may assign numeric value\n");

    // In C language, try - catch statement is not supported. You can use try - catch statement in other languages such as C#.
    // If user does not assign numeric value.
    num_converted = scanf("%f", &icm_scr);
    if (num_converted != 1)
    {
            printf("Invalid Input");
            exit(1);
    }


    return icm_scr;
}

/// The block is used for checking whether user is valid to get a credit card, or which type credit card can be presented to user.

char get_cr_type(float incomeF, float credit_scoreF)

{
    char type;
    if (incomeF < 15000)
    {
        type = 'N';
    }
    else if (incomeF >= 15000 && (credit_scoreF >= 500 && credit_scoreF < 650))
    {
        type = 'B';
    }
    else if (incomeF >= 15000 && (credit_scoreF >=650 && credit_scoreF < 750))
    {
        type = 'G';
    }
    else if (incomeF >= 15000 && (credit_scoreF >= 750))
    {
        type = 'P';
    }
    else printf("Invalid"); // if user assign negative value such as -5.


    return type;


}

/// Main Function

int main()
{
    float income = get_inc_scr("Enter your income per month");
    float credit_score = get_inc_scr("Enter your current credit score");

    char cr_type = get_cr_type(income, credit_score);

    printf("N: Not Eligible B: Basic, G: Gold, P: Platinum\nYour type is %c ", cr_type);


    return 0;
}
