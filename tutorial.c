//*Note: <> is placeholder for the value and does not denote a parameter.
#include <math.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

/*  Function division_trick(), 
    takes two integer parameters that act as <dividend> and <divisor>. splits the <dividend> into individual digits then 
    checks and displays in both word and ascii(*) how many times the <divisor> fits into each digit of the <divisor>. 
    Compiling the result of each digit into a single number results to the <quotient> that will also be printed.
    function can be repeated till user exits.

    Pre-condition:
        - dividend and divisor must be positive integer
        - divisor can only be a 1-digit integer
   
    @return nothing, the function will immediately print the output
*/
void division_trick() 
{
    int divisor, dividend;
    int tens, ones; //for seperating the digits of the dividend
    int remainder, base;

    printf("Dividend = ");
    scanf("%d", &dividend);
    printf("Divisor = ");
    scanf("%d", &divisor);

    // TODO: accomodate big digit dividend via loop:
    // - while dividend != 0 { extend <%>|</> then dividend / base
    // - think how to handle remainder
    // loop <*> printing

    ones = dividend % 10;
    tens = dividend / 10;
    
    ones /= divisor; 
    remainder = ones % divisor;
    tens = (tens + remainder)/divisor;


}

/*
    Function root_trick().
    takes two integer parameters that act as <radicand> and <index>. Assuming the radicand is a perfect root of the index,
    the function will split the radicand into individual digits then gets the sum of each digit, then subtract the sum 
    to the <index> which result to the <index> root of the <radicand>. function can be repeated till user exits.
    prints the the following:
    
        <index> root of <radicand>
        = sum of each digit in the radicand: <sum> - root <index> 
        = <difference>
   
    if the radicand is not a perfect root of the index, the following will be printed:
       
        <radicand> is not a perfect <index> root. No trick calculation executed.    

    Pre-condition:
        - Index and radicand must be a unsigned integer
        - radicand must at least be a 2 digit unsigned integer
        - index must be a unsigned integer from 1 - 9 

    @return nothing, the function will immediately print the output
*/
void root_trick()
{
    int radicand, index;
    int ones, tens; // for seperating the digits of the radicand
    float precon_radicand, root, base; // check conditions
    char loop, choice; // looping and program action conditions

    loop = 'Y';
    base = 100.00; // for getting the fractional part of normal radical operation.

    while (loop == 'Y') {
        printf("Radicand = ");
        scanf("%d", &radicand);
        printf("Index = ");
        scanf("%d", &index);
        
        precon_radicand = modff(pow(radicand, 1.0/index), &base); //checks if radicand is perfect root
                                                                  //gets the nth root of values and isolates the fractional part
        
        if (precon_radicand == 0.00 && radicand > 0) {
            ones = radicand % 10; 
            tens = radicand / 10;
    
            root = ones + tens - index;
            printf("%d, root of %d:\n", index, radicand);
            printf("= %d + %d\n", ones, tens);
            printf("= %d - %d\n",ones + tens, index);
            printf("= %.2f\n", root);
        
        } else { printf("%d, is not a perfect root of %d. No trick Executed\n", radicand, index); }

        printf("Would you like another sample? <Y/N>: ");
        scanf(" %c", &choice);
        choice = toupper(choice);
        
        if (choice == 'Y' || choice == 'N') { loop = choice; } // validates choice
        else { 
            do { // loops till corret input
                printf("Invalid Input!\n"); 
                printf("Would you like another sample? <Y/N>: ");
                scanf(" %c", &choice);
            } while (choice != 'Y' || choice != 'N'); 
        }
    }
}

/*
    Function tutorial(),
    called in main and runs the division or the roots trick based on user input.
    Function will loop 'till user inputs break condition.
    
    Pre-condition:
        - parameter x and y must be a integer
        - parameter choice must be a char and is only '1' or '2'
    
    @return nothing, the function will immediately print the output
*/
void tutorial() 
{
    char choice, loop;
    
    loop = 1;
    while (loop == 1) {
        printf("====================\n");
        printf(
                "Tutorial Menu\n");
        printf("====================\n");

        printf("1 - Divide Trick\n");
        printf("2 - Roots Trick\n");
        printf("3 - Exit\n");
        printf("Input: ");
        scanf(" %c", &choice);

         switch (choice) {
            case '1': 
                division_trick();
                break;
            case '2': 
                root_trick();
                break;
            case '3': 
                printf("Going back to Menu\n");
                loop = 0; 
                break;
           default: 
                printf("===================\n");
                printf("|INVALID INPUT|\n");
                printf("===================\n");
         }    
    } 
}
