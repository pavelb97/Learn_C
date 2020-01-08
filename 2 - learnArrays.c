#include <stdio.h>

int main(void){

    int numbers[10];                // Defines an array of 10 int values
                                    // Populate the array with values
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 10;

    int arraySum;
    printf("The 5th value in the array is %d.\n", numbers[4]);
    arraySum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    printf("The sum of the array is: %d.\n", arraySum);

    // Below is an example of a matrix - using numbers in decleration limits the array size

    int firstMatrix[2][4];
    int i;
    int j;

    firstMatrix[0][0] = 2;
    firstMatrix[0][1] = 4;
    firstMatrix[0][2] = 6;
    firstMatrix[0][3] = 8;
    firstMatrix[0][4] = 10;
    firstMatrix[1][0] = 3;
    firstMatrix[1][1] = 5;
    firstMatrix[1][2] = 7;
    firstMatrix[1][3] = 9;
    firstMatrix[1][4] = 11;

    for (i=0; i<2; i++){
        if (i==1){
            printf("\n");
        }
        for (j=0; j<5; j++){
            printf("[%d]", firstMatrix[i][j]);
        }
    }

    return 0;
}

