#include <stdio.h>

void Task(int *arr, int number, int element)

{

    int found = 0; //variable to store if element is found in array

    for (int i = 0; i < number; i++)

    {

        //from 0 to number-1 indices

        if (arr[i] == element) //if element in array is same as element

            found = 1; //update found as 1
    }

    if (found == 0)

    { //if element not found

        arr[number] = element; //append element at end of array

        number = number + 1; //increase the sixe of array by 1

        printf("\nElement not found.\n");

        printf("\nNew array is:\n");

        for (int i = 0; i < number; i++) //display the array after add the element at the last

        {

            printf("%d ", arr[i]);
        }
    }

    else //if element is found print the array

    {

        printf("\nElement is present in the array.\n");

        printf("\nThe array is:\n");

        for (int i = 0; i < number; i++)

        {

            printf("%d ", arr[i]);
        }
    }
}

//driver code

int main()

{

    int num, element;

    printf("\nEnter size of array: ");

    scanf("%d", &num);

    int arr[num];

    printf("\nEnter elements to the array:\n");

    for (int i = 0; i < num; i++)

    {

        scanf("%d", &arr[i]);
    }

    printf("\nEnter an element to search: ");

    scanf("%d", &element);

    Task(arr, num, element);

    return 0;
}