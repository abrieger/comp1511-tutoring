// Demo of scanf output
// Written by Adam Brieger (24-06-2021)
// Uncomment the part of the code you want to run

#include <stdio.h>

int main(void) {

    printf("Please enter data: ");

    // // PLAYING WITH %d:

    int scanned_in;
    int result = scanf("%d", &scanned_in);

    printf("scanned_in has value %d\n", scanned_in);
    printf("result has value %d\n", result);

    // // PLAYING WITH %lf:

    // double scanned_in;
    // int result = scanf("%lf", &scanned_in);

    // printf("scanned_in has value %lf\n", scanned_in);
    // printf("result has value %d\n", result);

    // // PLAYING WITH %d %d:

    // int scanned_1;
    // int scanned_2;
    // int result = scanf("%d %d", &scanned_1, &scanned_2);

    // printf("scanned_1 has value %d and scanned_2 has value %d\n", 
    //                                                     scanned_1, scanned_2);
    // printf("result has value %d\n", result);

    // // USING SCANF IN A WHILE LOOP:

    // Asks user for integer until incorrect input given (including ctrl + D)
    // int variable;
    // while ((scanf("%d", &variable)) == 1) {
    //     printf("variable is %d\n", variable);
    // }

    return 0;
}