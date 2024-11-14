#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    float marks;

    printf("Enter Your Marks: ");
    scanf("%f", &marks);

    if (marks <= 100 && marks>90)
    {
        printf("Your Grade is A+.\nEXCELLENT\nKeep it Up!");
    }
    else if (marks <= 90 && marks>80)
    {
        printf("Your Grade is A.\nVERY GOOD");
    }
    else if (marks <= 80 && marks>70)
    {
        printf("Your Grade is B.\nGOOD");
    }
    else if (marks <= 70 && marks>60)
    {
        printf("Your Grade is C.\nAVERAGE\nTry to improve next time!!");
    }
    else if (marks <= 60 && marks>50)
    {
        printf("Your Grade is D.\nPOOR\nTry to improve next time!!");
    }
    else if (marks <= 50 && marks>33)
    {
        printf("Your Grade is E.\nVERY POOR\nTry to improve next time! You seriously need to work harder!!");
    }
    else
    {
        printf("Your Grade is F.\nYou FAILED the Exam!!");
    }
    return 0;
}