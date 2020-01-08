#include <stdio.h>

// Structires in C are the basic foundation for objects and classes in C.
// Structs are large variables which hold several named variables inside.
// They are used for (but not limited to):
//          Serialization of data
//          Passing multiple arguments in and out of functions through a single argument (the struct itself)
//          Data structures such as linked lists, binary trees etc.

// The struct itself defines a template for the data.
struct dog{

    // Using const before a variable declaration makes that variable immutable (constant)
    const char * name;
    const char * breed;
    int avgHeightCm;
    int avgWeightKg;
};

void getDogInfo(struct dog aDog)
{
    printf("\n");
    printf("Name: %s\n", aDog.name);
    printf("Breed: %s\n", aDog.breed);
    printf("Average Height: %d cm\n", aDog.avgHeightCm);
    printf("Average Weight: %d kg\n", aDog.avgWeightKg);
};

void getMemoryLocations(struct dog aDog)
{
    printf("\n");
    printf("%s's Location info:\n", aDog.name);
    printf("Name location: %x\n", aDog.name);
    printf("Breed location: %x\n", aDog.breed);
    printf("Height location: %x\n", &aDog.avgHeightCm);
    printf("Weight location: %x\n", &aDog.avgWeightKg);
};

int main(void){

    // Creating an 'object instance' - we pass in the folowing arguments to the 'dog' struct
    // The 'roxy' struct variable defines the memory need to fit data. (esentially pointers)
    struct dog roxy = {"Roxy", "Rotweiller", 115, 45};
    getDogInfo(roxy);

    // The following code will replecate the 'roxy' struct variable and show where both are stored in memory
    struct dog roxy2 = roxy;
    getMemoryLocations(roxy);
    getMemoryLocations(roxy2);
    
}