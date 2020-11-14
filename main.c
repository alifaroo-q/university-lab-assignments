#include <stdio.h>
#include "header.h" // Including functions header file

void exit(int i); // Defining Exit Function

int main() {

    int user_input; // Declaring User Inputs Variable


    // Printing Program Options List

    printf("Select From The Following List: \n \n");

    printf("1: Ascii Converter \n");
    printf("2: Distance Converter \n");
    printf("3: Velocity Calculator \n");
    printf("4: Temperature Converter \n");
    printf("5: Exit Program \n");

    scanf_s("\n %d", &user_input); // Taking User Input in user_input Variable

    // Watching User Input and Calling the relevant function

    if (user_input == 1)
        ascii_converter();
    else if (user_input == 2)
        distance_converter();
    else if (user_input == 3)
        velocity_calculator();
    else if (user_input == 4)
        temp_calculator();
    else if (user_input == 5)
        exit(0);
    else
        printf("Please Enter From 1-4");

    return 0;
}