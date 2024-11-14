#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    // S1, S2 & S3 refer to English, Mathematics & Computer Science respectively.
    float marks_in_S1, marks_in_S2, marks_in_S3; 

    printf("Enter marks in English: ");
    scanf("%f", &marks_in_S1);

    printf("Enter marks in Mathematics: ");
    scanf("%f", &marks_in_S2);

    printf("Enter marks in Computer Science: ");
    scanf("%f", &marks_in_S3);

    float marks_in_per_cent = (marks_in_S1 + marks_in_S2 + marks_in_S3) / 3;

    printf("Your overall percentage is %f.\n", marks_in_per_cent);

    if ((marks_in_per_cent >= 33) && (marks_in_S1 >= 40) && (marks_in_S2 >= 40) && (marks_in_S3 >= 40))
    {
        printf("Congratulations!!\nYou PASSED with flying colours.");
    }
    else
    {
        printf("You FAILED the Exam.");
    }

    return 0;
}