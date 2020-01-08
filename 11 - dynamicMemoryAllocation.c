#include <stdio.h>
#include <stdlib.h>

// Sometimes we do not know how much memeory our programs require upon compilation
// This is especially true when dealing with user input. To overcome this problem we must dynamically allocate memory at runtime.
// 

int main(){

    int noOfStoredNumbers;
    printf("How many numbers do you want to store? ");
    scanf("%d", &noOfStoredNumbers);

    // Following pointer will set aside enough memory for the number of ints we asked for
    int * pUserNumber;
    pUserNumber = (int *) malloc(noOfStoredNumbers * sizeof(int));

    // If program runs out of memory the pointer returned will be NULL (Will crash if we use this)
   if(pUserNumber != NULL){
        int i = 0;
        printf("Enter a Number or Quit: ");
        while (i < noOfStoredNumbers && scanf("%d", &pUserNumber[i]) == 1)
        {
            printf("Enter a Number or Quit: ");
            i++;
        }
        
        printf("\nYou entered the following numbers:\n");
        for (int j = 0; j < i; j++)
        {
            printf("%d\n", pUserNumber[j]);
        }   
   } 
    free(pUserNumber);
    return 0;
}