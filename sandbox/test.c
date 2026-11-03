#include <stdio.h>

int main()
{ 
    int num;
    int i; //index for loop count    
    int digit[10]; // array will fit all digits in a number that is in the billions (billion limit cause of int limit at 2,147,483,647)
    int length; // limits the loop to how many times the array was actually filled
    length = 0; // init length

    printf("Number = ");
    scanf("%d", &num);
    digit[0] = num; // initial loop will shorten the number until its only 1 digit, storing each 
                    // iteration of the number into digit[] starting with the original number;

    for (i=1; num > 0 ; i++) { //repeats the loop until number can no longer be divided 
        num /= 10; // removes the right most bit of every succeeding integer starting from digit[0]
        digit[i] = num; // reult get stored to array
        length = i; // keeps track of how many times a value was actually stored
    }     

    for (i=0; i < length ; i++) { //loops through the array based on how many time a value was added in the earlier for loop,
                                  //then takes the right most digit, and replaces the current integer with said digit.
       digit[i] %= 10;
    }

    for (i=0; i < length; i++) { //loops through the array based on how many time a value was added in the earlier for loop,
                                 // does the division trick described in decsription. 

         //todo: division trick
    }

    return 0;
}

