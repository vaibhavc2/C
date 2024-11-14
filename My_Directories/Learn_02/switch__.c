//WAP to display the name of the day of the week as per choice given by user[1-7]
#include <stdio.h>
int main()
{
    // int choice;
    // printf("\nPress any number from 1-7 to get the name of the day of week: ");
    // scanf("%d", &choice);
    // switch (choice)
    // {
    // case 1:
    //     printf("\nMonday");
    //     break;
    // case 2:
    //     printf("\nTuesday");
    //     break;
    // case 3:
    //     printf("\nWednesday");
    //     break;
    // case 4:
    //     printf("\nThursday");
    //     break;
    // case 5:
    //     printf("\nFriday");
    //     break;
    // case 6:
    //     printf("\nSaturday");
    //     break;
    // case 7:
    //     printf("\nSunday");
    //     break;
    // default:
    //     printf("\nNone of the case is matching with your choice!");
    //     break;
    // }

        char ch;
        printf("\n Enter character: ");
        scanf("%c", &ch);
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\n Vowel");
            break;
        default:
            printf("\n Not a vowel");
            break;
        }
        return 0;
}