#include <stdio.h>

void example_07()
{
    int inp_mrk;

    printf("Enter Your Marks \n");
    scanf_s("%d", &inp_mrk);

    if (inp_mrk >= 70)
        printf("You got A Grade");
    else if (inp_mrk >= 60)
        printf("You got B Grade");
    else if (inp_mrk >= 50)
        printf("You got C Grade");
    else if (inp_mrk >= 40)
        printf("You got D Grade");
    else if (inp_mrk >= 33)
        printf("You got E Grade");
    else
        printf("You got F");
}