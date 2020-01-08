#include <stdio.h>

// Static is a C keyword which can be used with variables and functions
// A static variable increases the scope of said variable up to the entile containing file.


int counter();
int staticCounter();

int main(void){
    printf("Frist call of non-static variable: %d\nSecond call of non-static variable: %d\n", counter(),counter());
    printf("Frist call of static variable: %d\nSecond call of static variable: %d\n", staticCounter(),staticCounter());
    printf("Call on new line: %d", staticCounter());

    return 0;
}

//  If we do not declare 'count' to be a static variable the return value will remain 0
//  in the main function as the 'counter' is outside the main class. 

int counter(){
    int nonCount = 0;
    nonCount++;
    return nonCount;
}

int staticCounter(){
    static int count = 0;
    count++;
    return count;
}

//  By default, functions are global in C but if we declare it as static the scope is reduced to the file.
static void staticFunction(void) {
   printf("I am a static function.");
}