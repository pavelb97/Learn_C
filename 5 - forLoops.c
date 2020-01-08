#include <stdio.h>

int main(void){

    // For loop format: for ( counter = 0; counter condition terminator; counter++)

    int i;
    for (i=1; i<11; i++){
        printf("%d ", i);
    }

    int sum = 0;
    int smallArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (i=0; i < 10; i++){
        sum += smallArray[i];
    }
    printf("\nThe sum of the array is: %d.\n", sum);

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    for(i=0;i<10;i++){
        factorial *= array[i];
    }
    printf("10! is %d.\n", factorial);

    // While Loop example:
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        if(array[i] < 5){
        i++;
        continue;
        } if (array[i] > 10){
        break;
        }
		
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}