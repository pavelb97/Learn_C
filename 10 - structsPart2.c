#include <stdio.h>
// Here we will explore structs more in depth with nested structs, updating stuct values and using typedefs. 

struct dogFavs
{
    char * food;
    char * friend;
};

// Below is an example of using typedef to simplify struct use
typedef struct dog{
    const char * name;
    const char * breed;
    int avgHeightCm;
    int avgWeightKg;

    struct dogFavs favouriteThings;
} dog;

void getDogFavourites(dog aDog){
    printf("\n");
    printf("%s loves %s and their best friend is %s.\n",aDog.name,
    aDog.favouriteThings.food, aDog.favouriteThings.friend);
}

// Here we will use a setter function to change the value within a struct.

void setDogWeight(dog aDog, int newWeight){
    // The following example IS WRONG due to the way C creates the struct:
    aDog.avgWeightKg = newWeight;
    printf("The weight was changed to %d (but only within this instance of the struct).\n", aDog.avgWeightKg);
}

void setDogWeightPtr(dog *aDog, int newWeight){
    // The following example IS CORRECT as it is using a pointer to directly change the value:
    // Note the use of * and parentesis
    (*aDog).avgWeightKg = newWeight;
    printf("The weight was changed to %d (but only within this instance of the struct).\n", (*aDog).avgWeightKg);
}

int main(void){

    // Previously we were using 'struct dog' - now we only use the stuct variable name due to typedef
    // Also note how we define values in a nested struct
    dog alex = {"Alexandria", "German Shepard", 100, 40, {"Fish", "Pavel"}};
    getDogFavourites(alex);

    // Incorrect example:
    setDogWeight(alex, 45);
    printf("The weight in Main() %d (unupdated).\n\n", alex.avgWeightKg);
    
    // Correct example:
    setDogWeightPtr(&alex, 45);
    printf("The weight in Main() %d (updated).\n", alex.avgWeightKg);
}