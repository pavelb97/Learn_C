#include <stdio.h>

// Functions in C are simple but limited. They can have a fixed or variable amount of arguments.
// They can also only have one or no return value.
// Functions must be defined before they are used in code.

int doubleFunction(int val){
    val *= 2;
    return val;
}

// We can define the function before main and pad it afterwards.
// Below is also an example of a function which does not return any values.
void print_big(int number);

int main(void){

    printf("2 x 2 = %d.\n", doubleFunction(2));

    int array[] = { 1, 11, 2, 22, 3, 33 };
    int i;
    for (i = 0; i < 6; i++) {
        print_big(array[i]);
    }

    return 0;
}

void print_big(int number){
    if (number > 10){
    printf("%d is big\n", number);
    }