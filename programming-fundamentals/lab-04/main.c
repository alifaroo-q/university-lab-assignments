#include <stdio.h>
#include "headers.h" // Including functions header file

void exit(int i); // Defining Exit Function

int main() {

    int user_input; // Declaring User Inputs Variable


    // Printing Program Options List

    printf("Select From The Following List: \n \n");

    printf("1: Task 06 \n");
    printf("2: Task 07 \n");
    printf("3: Example 07 \n");
    printf("4: Dozen Calculator \n");
    printf("5: Year Check \n");
    printf("6: Wind Intensity \n");
    printf("7: Exit Program \n");

    scanf_s("\n %d", &user_input); // Taking User Input in user_input Variable

    // Watching User Input and Calling the relevant function

    if (user_input == 1)
        task_06();
    else if (user_input == 2)
        task_07();
    else if (user_input == 3)
        example_07();
    else if (user_input == 4)
        dozenCalculator();
    else if (user_input == 5)
        yearCheck();
    else if (user_input == 6)
        windIntensity();
    else if (user_input == 7)
        exit(0);
    else
        printf("Please Enter From 1-7");

    return 0;
}