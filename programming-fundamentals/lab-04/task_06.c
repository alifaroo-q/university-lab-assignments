#include <stdio.h>

void task_06()
{
    char usr_inp;

    printf("Please Enter A Character: \n");
    scanf_s(" %c", &usr_inp);
    printf("Your Entered: %c \n", usr_inp);

    if (usr_inp == 'a')
        printf("%c is a Vowel", usr_inp);
    else if (usr_inp == 'e')
        printf("%c is a Vowel", usr_inp);
    else if (usr_inp == 'i')
        printf("%c is a  Vowel", usr_inp);
    else if (usr_inp == 'o')
        printf("%c is a Vowel", usr_inp);
    else if (usr_inp == 'u')
        printf("%c is a Vowel", usr_inp);
    else if (usr_inp == 'w')
        printf("%c is a Semi-Vowel", usr_inp);
    else if (usr_inp == 'y')
        printf("%c is a Semi-Vowel", usr_inp);
    else
        printf("%c is a Consonant", usr_inp);
}