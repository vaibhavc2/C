#include<stdio.h>
int main() 
{
    int a[]={10,20,30,40,50};
    int i;
    int *ptr1=a;
    int *ptr2=&a[2];
    ptr1++;//ptr1 will point towards 20
    *ptr1=*ptr2;//20 will be overwritten with 30[10 30 30 40 50]
    ptr2++;//ptr2 will point towards 40
    *(ptr1+1)=34;//10 30 34 40 50
    ptr1=ptr2;//Both ptr1 and ptr2 will point towards 40
    *ptr1=90;//10 30 34 90 50
    *(ptr1--)=56; // 90 replaced by 56, but ptr now points to previous address
    *ptr1=67; //34 is replaced by 67
    ptr1=a;
    for(i=0;i<5;i++)
    {
        printf("\n%d",*(ptr1+i));
    }
    return 0;
}