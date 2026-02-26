#include<stdio.h>

int main ()
{
    int *p, num = 1, num2;

    p= &num;

    printf("valor que p aponta :%d\n", *p);

    num = *p + 1;
    printf("valor que p aponta :%d\n", *p);

    num2 = *&num;
    printf("valor de num2 :%d\n", *p);

    return 0;
}