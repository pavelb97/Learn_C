#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a = 69;
    int b = 420;
    int c = 5;
    int d = 420;
    // Operators: && AND, || OR, ! NOT, == EQUAL

    if (a > b){
        printf("Lol 69...\n");
    } else {
        printf("Ayy 420 blaze it pham danky danky.\n");
    }
    
    if (a > b || c){
        printf("This is an 'or' statement.\n");

        if (a < b && d){
            printf("This is an 'and' statement.\n");
        }
        
    }

    // Example of Do while loop and case statements
    int action;

    do{
        printf("1. What time is it?\n2. What day is it?\n3. What year is it?\n4. Quit\n");
        scanf(" %d", &action);
    }while (action < 1 || action > 4);

    switch (action)
    {
    case(1):
        printf("Time");
        break;
    case(2):
        printf("Day");
        break;
    case(3):
        printf("Year");
        break;
    default:
        printf("Exiting");
        exit(0);
        break;
    }

    return 0;
    
}