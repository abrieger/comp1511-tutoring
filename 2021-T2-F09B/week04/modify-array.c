// Demo of modifying arrays
// Written by Adam Brieger (25-06-2021)

#include <stdio.h>

#define SIZE 10

int main(void) {

    int numbers[SIZE];

    printf("Before: \n");
    // Assigning 42 to all elements of array
    int i = 0;
    while (i < SIZE) {    
        numbers[i] = 42; // assign 42 to element at index 'i'
        printf("numbers[%d] is %d\n", i, numbers[i]);
        i++;
    }

    // Changing element at index 2 to sum of first two elements
    numbers[2] = numbers[0] + numbers[1]; // numbers[2] = 84

    printf("After: \n");
    i = 0; // Reset counter for new loop
    while (i < SIZE) {
        printf("numbers[%d] is: %d\n", i, numbers[i]);
        i++;
    }

    return 0;
}