// Demo of modifying arrays in functions
// Written by Adam Brieger (25-06-2021)

#include <stdio.h>

#define SIZE 10

void print_array(int array[SIZE]);
void change_element(int array[SIZE], int idx);

int main(void) {

    int array[SIZE] = {0};

    print_array(array);

    int idx;
    printf("Enter index (between 0 and 9) to change to 42: "); 
    // ... assuming index is within range
    scanf("%d", &idx);

    // array[idx] = 42;
    // ... but arrays are special and can be accessed within functions!
    change_element(array, idx);

    print_array(array);

    return 0;
}

// Prints the array
void print_array(int array[SIZE]) {
    int i = 0;
    while (i < SIZE) {
        printf("array[%d] is: %d\n", i, array[i]);
        i++;
    }
}

// Changes element at specified index to 42
void change_element(int array[SIZE], int idx) {
    array[idx] = 42;
}