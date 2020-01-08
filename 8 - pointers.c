#include <stdio.h>

// Pointers are essentially an integer variable which holds a memory address which points to a value, instead of the value itself.
// The way C memory works is it stores data sequentially and the pointer point to a specific part of this memeory.
// While variables return the value assined to it, the variable itself is really a pointer to said value.
// When we declare the string: 
//                              char * name = "Pavel"
// We really just create a pointer to 'P'.
// When the string is returned we access the address at P and follow the rest of the letters which are stored sequentially.


int main(void){
    int a = 55;                 // Define a local variable

    int * pointerToA = &a;      // Define a pointer variable and point it to the a value using the &

    printf("The value of a is: %d.\n", a);
    printf("The address of a is: %x.\n", pointerToA);
    printf("The value of a is also: %d.\n\n", *pointerToA);
    
    // Note the chage to local variable.
    a = 69;

    printf("The value of a is: %d.\n", a);
    printf("The address of a is: %x.\n", pointerToA);
    printf("The value of a is also: %d.\n\n", *pointerToA);

    // Changes can also be made through pointer dereferencing
    // Dereferencing is using a pointer to access a value directly

    *pointerToA += 1;
    printf("The new value of a is: %d.", *pointerToA);
    
    return 0;
}