#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    //C program to implement Time Unit Converter.

    float t1, t2;
    int option;
    char name[50], menu[20], ch[20], choice[20];

    printf("\n\t\t\t\t\t\t\t\t\t\tTIME UNIT CONVERTER\n\n\n");

    printf("Enter your Full Name: ");
    scanf("%[^\n]%*c", &name);
    printf("\nHello %s! Welcome to the Official Time Unit Converter Software.\n\n", name);

    printf("Type 'menu' to display the menu & 'exit' to end the program (any other characters will start the program straightaway!): ");
    scanf("%s", &menu);

    if (strcmp(menu, "menu") == 0 || strcmp(menu, "MENU") == 0 || strcmp(menu, "Menu") == 0)
    {
        printf("\n\n 1: To convert from minutes to hours.\n");
        printf(" 2: To convert from hours to minutes.\n");
        printf(" 3: To convert from hours to seconds.\n");
        printf(" 4: To convert from seconds to hours.\n");
        printf(" 5: To convert from days to hours.\n");
        printf(" 6: To convert from hours to days.\n");
        printf(" 7: To convert from milliseconds to seconds.\n");
        printf(" 8: To convert from seconds to milliseconds.\n");
        printf(" 9: To convert from days to years.\n");
        printf("10: To convert from years to days.\n");

        printf("\nType 'start' to start staright-away & any other thing to end the program: ");
        scanf("%s", &ch);

        while (strcmp(ch, "start") == 0 || strcmp(ch, "Start") == 0 || strcmp(ch, "START") == 0)
        {

            printf("\nEnter any no. from 1-10 to proceed: ");
            scanf("%d", &option);

            switch (option)
            {
            case 1:
                printf("\nYou have opted to convert from minutes to hours.\n\n");
                printf("Enter the time in minutes: ");
                scanf("%f", &t1);
                t2 = t1 / 60;
                printf("\nThe given time in hours: %.2f\n\n", t2);
                break;
            case 2:
                printf("\nYou have opted to convert from hours to minutes.\n\n");
                printf("Enter the time in hours: ");
                scanf("%f", &t1);
                t2 = t1 * 60;
                printf("\nThe given time in minutes: %.2f\n\n", t2);
                break;
            case 3:
                printf("\nYou have opted to convert from hours to seconds.\n\n");
                printf("Enter the time in hours: ");
                scanf("%f", &t1);
                t2 = t1 * 60 * 60;
                printf("\nThe given time in seconds: %.2f\n\n", t2);
                break;
            case 4:
                printf("\nYou have opted to convert from seconds to hours.\n\n");
                printf("Enter the time in seconds: ");
                scanf("%f", &t1);
                t2 = t1 / (60 * 60);
                printf("\nThe given time in hours: %.2f\n\n", t2);
                break;
            case 5:
                printf("\nYou have opted to convert from days to hours.\n\n");
                printf("Enter the time in days: ");
                scanf("%f", &t1);
                t2 = t1 * 24;
                printf("\nThe given time in hours: %.2f\n\n", t2);
                break;
            case 6:
                printf("\nYou have opted to convert from hours to days.\n\n");
                printf("Enter the time in hours: ");
                scanf("%f", &t1);
                t2 = t1 / 24;
                printf("\nThe given time in days: %.2f\n\n", t2);
                break;
            case 7:
                printf("\nYou have opted to convert from milliseconds to seconds.\n\n");
                printf("Enter the time in milliseconds: ");
                scanf("%f", &t1);
                t2 = t1 / 1000;
                printf("\nThe given time in seconds: %.2f\n\n", t2);
                break;
            case 8:
                printf("\nYou have opted to convert from seconds to milliseconds.\n\n");
                printf("Enter the time in seconds: ");
                scanf("%f", &t1);
                t2 = t1 * 1000;
                printf("\nThe given time in milliseconds: %.2f\n\n", t2);
                break;
            case 9:
                printf("\nYou have opted to convert from days to years.\n\n");
                printf("Enter the time in days: ");
                scanf("%f", &t1);
                t2 = t1 / 365;
                printf("\nThe given time in years: %.2f\n\n", t2);
                break;
            case 10:
                printf("\nYou have opted to convert from years to days.\n\n");
                printf("Enter the time in years: ");
                scanf("%f", &t1);
                t2 = t1 * 365;
                printf("\nThe given time in days: %.2f\n\n", t2);
                break;
            default:
                printf("\nThe entered value is not supported.\n\n");
                break;
            }

            printf("\nDo you want to continue further?\n\nType 'start' to start again: ");
            scanf("%s", &ch);
        }

        printf("\n\n\t\t\t\t\t\t\t\t\t\tThe program has Ended. Thank You, %s!\n", name);
    }
    else if (strcmp(menu, "exit") == 0 || strcmp(menu, "Exit") == 0 || strcmp(menu, "EXIT") == 0)
    {
        printf("\n\n\t\t\t\t\t\t\t\t\t\tThe program has Ended. Thank You, %s!\n", name);
    }
    else
    {
        printf("\n\t\t\t\t\t\t\t\t\t\tWARNING!! You have opted not to display the menu..!!\n\n");
        printf("Do you really want to continue without the menu? (Menu is imp to know the options)\nPlease Type Yes/No: ");
        scanf("%s", &choice);
        if (strcmp(choice, "Yes") == 0 || strcmp(choice, "YES") == 0 || strcmp(choice, "yes") == 0)
        {
            printf("\n\n 1: To convert from minutes to hours.\n");
            printf(" 2: To convert from hours to minutes.\n");
            printf(" 3: To convert from hours to seconds.\n");
            printf(" 4: To convert from seconds to hours.\n");
            printf(" 5: To convert from days to hours.\n");
            printf(" 6: To convert from hours to days.\n");
            printf(" 7: To convert from milliseconds to seconds.\n");
            printf(" 8: To convert from seconds to milliseconds.\n");
            printf(" 9: To convert from days to years.\n");
            printf("10: To convert from years to days.\n");
        }
        
        printf("\nType 'start' to start & any other thing to end the program: ");
        scanf("%s", &ch);

        while (strcmp(ch, "start") == 0 || strcmp(ch, "Start") == 0 || strcmp(ch, "START") == 0)
        {
            printf("\nEnter any no. from 1-10 to proceed: ");
            scanf("%d", &option);

            switch (option)
            {
            case 1:
                printf("\nYou have opted to convert from minutes to hours.\n\n");
                printf("Enter the time in minutes: ");
                scanf("%f", &t1);
                t2 = t1 / 60;
                printf("\nThe given time in hours: %.2f\n\n", t2);
                break;
            case 2:
                printf("\nYou have opted to convert from hours to minutes.\n\n");
                printf("Enter the time in hours: ");
                scanf("%f", &t1);
                t2 = t1 * 60;
                printf("\nThe given time in minutes: %.2f\n\n", t2);
                break;
            case 3:
                printf("\nYou have opted to convert from hours to seconds.\n\n");
                printf("Enter the time in hours: ");
                scanf("%f", &t1);
                t2 = t1 * 60 * 60;
                printf("\nThe given time in seconds: %.2f\n\n", t2);
                break;
            case 4:
                printf("\nYou have opted to convert from seconds to hours.\n\n");
                printf("Enter the time in seconds: ");
                scanf("%f", &t1);
                t2 = t1 / (60 * 60);
                printf("\nThe given time in hours: %.2f\n\n", t2);
                break;
            case 5:
                printf("\nYou have opted to convert from days to hours.\n\n");
                printf("Enter the time in days: ");
                scanf("%f", &t1);
                t2 = t1 * 24;
                printf("\nThe given time in hours: %.2f\n\n", t2);
                break;
            case 6:
                printf("\nYou have opted to convert from hours to days.\n\n");
                printf("Enter the time in hours: ");
                scanf("%f", &t1);
                t2 = t1 / 24;
                printf("\nThe given time in days: %.2f\n\n", t2);
                break;
            case 7:
                printf("\nYou have opted to convert from milliseconds to seconds.\n\n");
                printf("Enter the time in milliseconds: ");
                scanf("%f", &t1);
                t2 = t1 / 1000;
                printf("\nThe given time in seconds: %.2f\n\n", t2);
                break;
            case 8:
                printf("\nYou have opted to convert from seconds to milliseconds.\n\n");
                printf("Enter the time in seconds: ");
                scanf("%f", &t1);
                t2 = t1 * 1000;
                printf("\nThe given time in milliseconds: %.2f\n\n", t2);
                break;
            case 9:
                printf("\nYou have opted to convert from days to years.\n\n");
                printf("Enter the time in days: ");
                scanf("%f", &t1);
                t2 = t1 / 365;
                printf("\nThe given time in years: %.2f\n\n", t2);
                break;
            case 10:
                printf("\nYou have opted to convert from years to days.\n\n");
                printf("Enter the time in years: ");
                scanf("%f", &t1);
                t2 = t1 * 365;
                printf("\nThe given time in days: %.2f\n\n", t2);
                break;
            default:
                printf("\nThe entered value is not supported.\n\n");
                break;
            }

            printf("\nDo you want to continue further?\n\nType 'start' to start again: ");
            scanf("%s", &ch);
        }

        printf("\n\n\t\t\t\t\t\t\t\t\t\tThe program has Ended. Thank You, %s!\n", name);
    }

    return 0;
}
