#include <unistd.h>

void    itob(unsigned char octet)
{
        int     i;
        char    *base;

        i = 7;
        base = "01" ;
        while (i >= 0)
        {
                write(1, &base[(octet >> i) % 2], 1);
                i--;
        }
}
/*
int     main(void)
{
        int a = 128;
        itob(a);
        write(1, "\n\n\n", 3);
        itob(127);
        write(1, "\n\n\n", 3);
}
*/