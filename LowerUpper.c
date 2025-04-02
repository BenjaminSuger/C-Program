#include <stdio.h>

int     main(void)
{
        char letter1 = 'A';
        printf("la lettre avant %c\n", letter1);
        letter1 ^= ' ';
        printf("la lettre apres %c\n", letter1);
}