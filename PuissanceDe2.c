#include <stdio.h>
#include "itob.c"


void    Puissance2(int number)
{
        if ((number & number - 1) == 0)
                printf("%d est une puissance de 2\n", number);
        else
                printf("%d n'est pas une puissance de 2\n", number);
}

int     main(void)
{
        Puissance2(1);

        Puissance2(2);

        Puissance2(4);

        Puissance2(22);
}