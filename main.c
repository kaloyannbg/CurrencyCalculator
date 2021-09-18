#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{


    int currencyChoice;

    double sum;

    double convertToEUR;

    double convertToUSD; //US Dollar

    double convertToBGN;

    do {

      sum = 0;

      printf("\n -- Currency Converter -- \n");


      printf("\n -- Enter 1 for convert BGN ");
      printf("\n -- Enter 2 for convert EUR ");
      printf("\n -- Enter 3 for convert USD \(US Dollar\) ");


      printf("\n\n -- Enter your choice: ");

      scanf("%d", &currencyChoice);

      printf("\n\n");

      if(currencyChoice == 1) {
            system("clear");
            printf("\n\n -- You choose BGN --\n\n");

            printf(" -- Enter your BGN sum: ");

            scanf("%lf", &sum );

            if(sum < 0) {
                printf("\n\n !! Please enter valid sum !!\n\n");
            } else {

            //sum = abs(sum);

            convertToEUR = sum * 0.51129188;
            convertToUSD = sum * 0.60000036;

            printf("\n\n -- Your currency is BG -- \n\n");
            printf(" -- %.2f BGN = %.2f EUR -- ", sum, convertToEUR);
            printf("\n\n -- %.2f BGN = %.2f USD (US Dollars) -- ", sum, convertToUSD);
            }

      } else if(currencyChoice == 2) {
            system("clear");
            printf("\n\n -- You choose EUR --\n\n");

            printf(" -- Enter your EUR sum: ");

            scanf("%lf", &sum );

            if(sum < 0) {
                printf("\n\n !! Please enter valid sum !!\n\n");
            } else {

            //sum = abs(sum);

            convertToBGN = sum * 1.95583;
            convertToUSD = sum * 1.1735529;

            printf("\n\n -- Your currency is EUR -- \n\n");
            printf(" -- %.2f EUR = %.2f BGN -- ", sum, convertToBGN);
            printf("\n\n -- %.2f EUR = %.2f USD (US Dollars) -- ", sum, convertToUSD);
            }

        } else if(currencyChoice == 3) {

            system("clear");
            printf("\n\n -- You choose USD \(US Dollar\) --\n\n");

            printf(" -- Enter your USD sum: ");

            scanf("%lf", &sum );

            if(sum < 0) {
                printf("\n\n !! Please enter valid sum !!\n\n");
            } else {

            //sum = abs(sum); ABS MAKE DOUBLE POINTER TO INT NUMBER.

            convertToBGN = sum * 1.6665393;
            convertToEUR = sum * 0.85208804;

            printf("\n\n -- Your currency is USD -- \n\n");
            printf(" -- %.2f USD = %.2f BGN -- ", sum, convertToBGN);
            printf("\n\n -- %.2f USD = %.2f EUR -- ", sum, convertToEUR);
            }

        } else {
            system("clear");
            printf("\n\n !! Please try again. Wrong currency code. !!\n\n");
      }

        printf("\n\n");



    } while(currencyChoice != 0);


    printf("\n\n\n");
    return 0;
}
