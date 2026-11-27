#include <math.h>
#include <stdio.h>
#include <strings.h>

int main() {
    int radicand, index, i, sum, digit, result, hold, isolate;
    int precon_radicand, nthPower; // for check conditions
    char loop, choice, length; // looping and program action conditions
    float nth; // 1/n power for radical operation
    
    loop = 'Y';
    sum = 0;
    while (loop == 'Y') {
        printf("Radicand = ");
        scanf("%d", &radicand);
        printf("Index = ");
        scanf("%d", &index);
        
        nth = 1.00 / index;
        precon_radicand = pow(radicand, nth);
        
        if (radicand < 0) { 
            printf("Enter a Positive Radicand\n");  
        }
        if (index < 0) {
            printf("Enter a Positive Index\n");  
        }
        if (index < 2) {
            printf("Index Must at least be 2\n");  
        }
        if (radicand < 10) {
            printf("Enter a 2-digit Radicand\n");  
        }
        
        else {

            nthPower = precon_radicand;
            for (i=2; i<=index; i++) {
                nthPower *= precon_radicand;
            }
            
            hold = radicand;
            for (i=1; hold != 0; i++) {
                hold /= 10;
                length = i;
            }
            
            isolate = radicand;
            if (nthPower == radicand) {
                for (i=0; i<length; i++) {
                    digit = isolate % 10;
                    printf("digit = %d", digit);
                    sum += digit;
                    isolate /= 10;
                }

                result = sum - index;

                printf("%d root of %d\n", index, radicand);
                printf("= Sum of Digits %d - %d\n",sum, index );
                printf("= %d\n", result);

            }
        
            else { 
                printf("%d is not a perfect root of %d. No trick calculation executed\n", radicand, index); 
            }
        

        }
        
        printf("\n");
        printf("Do you want Another Sample? [Y/N]: ");
        scanf("%c", &choice);

        do {
            printf("Invalid Input\n");
            printf("Do you want Another Sample? [Y/N]: ");
            scanf("%c", &choice);
        }
        while (choice != 'Y' || choice != 'N'); 
    }
}

