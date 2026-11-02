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

    printf("Try out a Tutorial: <1> \n");
    printf("Enter Simulation: <2> \n");
    scanf("%c", &choice);

    switch (choice) {
        case '1':
            tutorial();
            break;
        case '2':
            simulation();
            break;
    }

    return 0;
}
