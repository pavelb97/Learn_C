#include <stdio.h>
#include <string.h>

int main(void){

    // Strings in C are actually an array of characters
    // Pointers are used to access these characters

    // This method defines a static string which is read-only 
    char * name = "Pavel Belitskiy";

    // This allocates an array size of string length + 1 (null terminator). These types of strings can be edited.
    char longName[] = "Pavel Belitskiy";

    printf("My name is %s. I am %d years old.\n", longName, 22);

    // Following built-in function returns string length
    char * crazyAssString = "jdijninsnvsdbvsdjksd";
    printf("The lentgth of this string is: %d.\n", strlen(crazyAssString));
    
    // Following built-in function returns 0 if two strings are equal
    char * lolString = "lol";
    if(strncmp(lolString, "lol", 3) == 0){
        printf("Yep - They're equal.\n");
    } else{
        printf("Nah bro they're not equal.\n");
    }

    // Following built-in function appends the first n characters of 2st string to 1st string
    char dest[20]="Hello";
    char src[20]="World";
    strncat(dest,src,3);
    printf("%s\n",dest);
    strncat(dest,src,20);
    printf("%s\n",dest);

    return 0;
}
