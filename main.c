/*
    Description:
    Programmed by: Zac Angelo Mesias <S48B>
    Last Modified: 10/29/2026
    Version: 0.1
*/

#include <stdio.h>
#include "simulation.h"
#include "tutorial.h"
int main() 
{
    char choice;
   
    int loop = 1; 
    while (loop == 1) {
        printf("==============\n");
        printf("Math Tricks\n");
        printf("==============\n");
        printf("1 - Try out a Math Trick\n");
        printf("2 - Simulate Multiple Cases\n");
        printf("3 - Close Program\n");
        printf("Input: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                tutorial();
                break;
            case '2':
                simulation();
                break;
            case '3':
                loop = 0; //loop exit condition
                break;
            default:
                printf("===================\n");
                printf("|INVALID INPUT|\n");
                printf("===================\n");
        }    
    }     

    return 0;
}


