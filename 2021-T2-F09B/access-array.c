// Demo of accessing and printing arrays
// Written by Adam Brieger (25-06-2021)

#include <stdio.h>

#define SIZE 7

int main(void) {
    
    // Declaring and initialising an array to all 0s
    int zeroes[SIZE] = {0};

    // Printing all elements in array (version 1)
    // printf("zeroes[0] is : %d\n", zeroes[0]);
    // printf("zeroes[1] is : %d\n", zeroes[1]);
    // printf("zeroes[2] is : %d\n", zeroes[2]);
    // printf("zeroes[3] is : %d\n", zeroes[3]);
    // printf("zeroes[4] is : %d\n", zeroes[4]);
    // printf("zeroes[5] is : %d\n", zeroes[5]);
    // printf("zeroes[6] is : %d\n", zeroes[6]);
    // printf("zeroes[7] is : %d\n", zeroes[7]); // Don't go beyond the array!

    // Printing all elements in array (version 2)
    int i = 0;
    while (i < SIZE) {
        printf("zeroes[%d] is: %d\n", i, zeroes[i]);
        i++;
    }

    return 0;    
}