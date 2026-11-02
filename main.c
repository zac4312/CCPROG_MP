/*
    Description:
    Programmed by: Zac Angelo Mesias <S48B>
    Last Modified: 11/03/2026
    Version: a380f07205217328ad0e8c5a8b70a88eeb3ea486 (git commit log)
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


