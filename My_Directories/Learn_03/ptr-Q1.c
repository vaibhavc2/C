#include<stdio.h>

int main()
{
    int a[]={1,2,3,4,5};
    int i;
    int *ptr=a;
    ptr++;//ptr=ptr+1,pointer is pointing towards 2
    *(ptr+2)=90;//1 2 3 90 5
    ptr=ptr+2;//pointer is pointing towards 4
    *ptr=100;//1 2 3 100 5
    ptr--;//pointer is pointing towards 3
    *ptr=12;//1 2 12 100 5
    *(ptr+1)=99;//1 2 12 99 5
    ptr=a;
    for(i=0;i<5;i++)
    { 
        printf("\n%d",*(ptr+i));
    }
    return 0;
}