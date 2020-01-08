/* Multiline Comment */
// Single line comment

#include <stdio.h>                                      // Basic importing?
#include <string.h>

#define MYNAME "Pavel Belitskiy"                        // Declaring a constant

int globalVar = 100;                                    // Declaring a global variable (has global scope)


int main(void){

    // Main function is where code is executed
    // Similarly to MIPS assembley .main

    char firstLetter = 'P';                             // Local variable (within main) character variable
    int age = 22;                                       // Integer value (between -32,768 32,768)
    long int superBigNumber = -350000;
    float piValue = 3.14;                               // Float value can hold up to 38 DP
    double reallyBigPiValue = 3.14314314314314314314314;

    // C does not support Boolean values thus they have to be manually defined as follows
    
    #define BOOL char;
    #define FALSE 0;
    #define TRUE 1;

    printf("\n");                                       // Standard output (To screen)
    printf("Hello World!");
    return 0;
}