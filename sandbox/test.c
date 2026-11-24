#include <math.h>
#include <stdio.h>

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

int main()
{ 
    int holder;
    int i; //loop count    
    int digit; // indevidual digits of the dividend
    int length; // how many digits there are in the dividend  
    int dividend, divisor, quotient, remainder;
    int result;
    int isolator; // removes the left most digit  
    
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

    printf("Answer = %d", result);
   return 0;
}

