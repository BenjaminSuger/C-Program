#include <stdio.h>


void    swap(int *a, int *b)
{
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
}

int     main(void)
{
        int a = 21;
        int b = 42;
        printf("variable a avant swap %d\n", a);
        printf("variable b avant swap %d\n", b);
        swap(&a, &b);
        printf("variable a apres swap %d\n", a);
        printf("variable b apres swap %d\n", b);
}