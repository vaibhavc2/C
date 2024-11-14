// #include<stdio.h>
// int main()
// {
// int a=1;
// double b=2.345;
// char c='A';
// printf("%d %d %d",sizeof(a),sizeof(b),sizeof(c));
// return 0;
// }
#include<stdio.h>
int main()
{
// float a=5.9,b=2.87;
// float res;
// res=(int)a+(int)b;
// printf("%f",res);

// int a = -8, b = 12;
// printf("%d %d", ~a, ~b);

int a = -1, b = 12, c;
c = ++a && ++b;
printf("%d %d %d", a, b, c);

return 0;
}