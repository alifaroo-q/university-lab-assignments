/*
 *  This function takes user input in character
 *  and shows its ascii code
 *
 */

void ascii_converter()
{
//    float input_float;
    char input_char;

    /*printf("Enter A Floating Number:  \n");
    scanf_s("%f", &input_float);
    printf("You Entered %f \n", input_float);*/
    printf("Enter A Character: \n");
    scanf_s(" %c", &input_char, 1);

    printf("The ASCII Value Of %c is %d: \n",input_char, input_char);

}

/*
 *  This function takes user input for distance between
 *  cities in Kilometers and and converts them into meter
 *
 */

void distance_converter()
{
    float kmDistance;
    float mDistance;
    float feetDistance;

    printf("Enter The Distance Between Two Cities (KM): \n");
    scanf_s("%f", &kmDistance);

    // For Distance In meter

    mDistance = kmDistance * 1000;

    // For Distance In Feet

    feetDistance = kmDistance * 3280.84; // NOLINT(cppcoreguidelines-narrowing-conversions)

    printf("The Distance Between Two Cities In Meter Is: %f \n", mDistance);
    printf("The Distance Between Two Cities In Feet Is: %f \n", feetDistance);

}

/*
 *  This function takes velocity of jet in m/s
 *  and distance at which catapult launched it
 *  and finds out time to takeoff and acceleration
 *
 * */

void velocity_calculator()
{
    float mVelocity;
    float mDistance;
    float time;
    float acceleration;

    printf("Enter The Velocity (m/s): \n");
    scanf_s("%f", &mVelocity);

    printf("Enter The Distance (m): \n");
    scanf_s("%f", &mDistance);

    time = (2 * mDistance) / mVelocity; // Time Formula
    acceleration = mVelocity / time;    // Acceleration

    printf("The Acceleration of The Jet Is: %f m/s \n", acceleration);
    printf("The Time Required By Jet To Takeoff Is: %f sec \n", time);

}

/*
 *  This functions takes temperature in Fahrenheit
 *  and coverts it into celsius
 *
 * */

void temp_calculator()
{
    float temp_F;
    float temp_C;

    printf("Enter The Temperature In Fahrenheit: \n");
    scanf_s("%f", &temp_F);

    temp_C = (temp_F - 32) * 5/9; // Conversion Formula for Fahrenheit

    printf("The Temperature In Celsius Is: %f \n", temp_C);

}

#ifndef LAB_ASSIGNMENT_TASKS_HEADER_H
#define LAB_ASSIGNMENT_TASKS_HEADER_H

#endif //LAB_ASSIGNMENT_TASKS_HEADER_H