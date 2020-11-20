#include <stdio.h>

void dozenCalculator()
{
    int numOrange;
    int dozen = 12;

    printf("Enter the number of Oranges: \n");
    scanf_s("%d", &numOrange);

    // This shows no. of dozens
    int numDozen = numOrange / dozen;

    if (numOrange % dozen == 0)
    {
        printf("%d is a dozen \n", numOrange);
        printf("%d is %d dozen of Oranges",numOrange, numDozen);
    }
    else
        printf("%d is not a dozen", numOrange);
}