#include <stdio.h>

void yearCheck()
{

    int year;
    int leap = 4;
    int next_leap;
    int next_leap_mod;


    printf("Enter the Year: \n");
    scanf_s("%d", &year);

    next_leap_mod = year % leap; // find the modulus
    next_leap = leap - next_leap_mod; // subtracting leap_modulus from leap

    if (year % leap == 0)
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year \n", year);
        printf("Next Leap year in: %d years", next_leap);
    }

}