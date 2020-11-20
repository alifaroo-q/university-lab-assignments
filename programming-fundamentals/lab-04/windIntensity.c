#include <stdio.h>

void windIntensity()
{

    int windSpeed;

    printf("Enter the Wind Speed: \n");
    scanf_s("%d", &windSpeed);

    if (windSpeed < 25 )
        printf("Wind is not strong");
    else if (windSpeed >= 25 && windSpeed <= 38)
        printf("Wind is strong");
    else if (windSpeed >= 39 && windSpeed <= 54)
        printf("It is gale");
    else if (windSpeed >= 55 && windSpeed <= 72)
        printf("It is whole gale");
    else if (windSpeed > 72)
        printf("It is a hurricane");
}