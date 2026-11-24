//*Note: <> is placeholder for the value and does not denote a parameter.
#include <math.h>
#include <stdio.h>
#include <strings.h>
#include <ctype.h>

//todo: fix loop error and redo root trick: issue { radicand can be greater than 10 digits }

/* prints starts for the division trick,
   takes the divisor and quotient and loops, printing how many groups of the divisor
   fit into the digit.

    Pre-condition:
        - dividend and divisor must be positive integer
        - divisor can only be a 1-digit integer
   
    @return nothing, the function will immediately print the output
*/
void stars(int divisor, int quotient) 
{
    int i, j;
    for (i = 0; i < quotient ; i++) { //prints a space based on how many groups there are
        printf(" "); 
        
        for (j = 0; j < divisor ; j++) { //prints a * for how many there are in 1 group
            printf("*");
        }        
    }     
} 


/*  Function division_trick(), 
    takes two integer parameters that act as <dividend> and <divisor>. Splits the <dividend> into individual digits then 
    checks and displays in both word and ascii(*) how many times the <divisor> fits into each digit of the <divisor>, 
    adding the remainder to the next digit. Compiling the result of each digit into a single dividendber results to the 
    <quotient> that will also be printed. function can be repeated till user exits.

    Pre-condition:
        - dividend and divisor must be positive integer
        - divisor can only be a 1-digit integer
   
    @return nothing, the function will immediately print the output
*/
void division_trick() 
{
    int holder;
    int i; //loop count    
    int digit; // indevidual digits of the dividend
    int length; // how many digits there are in the dividend  
    int dividend, divisor, quotient, remainder;
    int result;
    int isolator; // removes the left most digit   
     char loop, choice; // looping and program action conditions

    loop = 'Y';

    while (loop == 'Y') { 
    // initialize values
    remainder = 0;
    result = 0;
    
    printf("Dividend = ");
    scanf("%d", &dividend);
  
    printf("Divisor = ");
    scanf("%d", &divisor);
    
    holder = dividend;  
    for (i=1; holder!= 0; i++) { //divides dividend by 10 until it can no longer be divided
        holder /= 10;
        length = i; //length takes count
    }

    for (i=1; i <= length; i++) {
        digit = dividend / pow(10, length-i); //dividend is isolated to its left most digit
        digit += remainder*10; //puts the remainder to the left most side of the next digit
        
        remainder = digit % divisor; 
        quotient = digit / divisor; 

        printf("%d = ", digit);
        stars(divisor, quotient); printf(" ");
        printf("= %d grouped, %d ungrouped to be included in the next digit\n", quotient, remainder);
        
        isolator = pow(10, length-i); 
        dividend %= isolator; // removes the left most digit of the working number
        result = result * 10 + quotient; // puts the quotients of each loop to the left of each other
    }

    printf("Answer = %d\n", result);

    printf("Would you like another sample? <Y/N>: ");
    scanf(" %c", &choice);
    choice = toupper(choice);
    
    if (choice != 'Y' || choice != 'N') {// validates choice 
            do { // loops till corret input
                printf("Invalid Input!\n"); 
                printf("Would you like another sample? <Y/N>: ");
                scanf(" %c", &choice);
                choice = toupper(choice);
            } while (choice != 'Y' || choice != 'N'); 
    } else { loop = choice; }
    }
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
    float precon_radicand, root, base; // for check conditions
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
        
        if (radicand < 0) { printf("Please Enter a Number Greater than 0"); }
        if (precon_radicand == 0.00) {
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
