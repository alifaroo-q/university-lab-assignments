#include <stdio.h>

void task_07()
{

     int ObtMarks;
     int maxMarks;
     int resMarks;

     printf("Enter Total Marks: \n");
     scanf_s("%d", &maxMarks);

     printf("Enter Obtained Marks: \n");
     scanf_s("%d", &ObtMarks);

     resMarks = (ObtMarks * 100) / maxMarks;

     printf("You got %d percent \n", resMarks);

     if (resMarks >= 70)
         printf("You got A Grade");
     else if (resMarks >= 60)
         printf("You got B Grade");
     else if (resMarks >= 50)
         printf("You got C Grade");
     else if (resMarks >= 40)
         printf("You got D Grade");
     else if (resMarks >= 33)
         printf("You got E Grade");
     else
         printf("You got F Grade");
}