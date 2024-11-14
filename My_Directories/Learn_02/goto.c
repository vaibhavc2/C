#include <stdio.h>
int main() { int num,fact=1,i; label1: printf("\nEnter any number:"); scanf("%d",&num); if(num%2==0) { printf("\n Input is not ok...As the number is even:"); goto label1; } else { goto label2; } label2: for(i=1;i<=num;i++) { fact=fact*i; } printf("\n Factorial of odd number is:%d",fact);
return 0;
} //program taken from sir