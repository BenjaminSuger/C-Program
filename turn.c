#include "itob.c"
#include <stdio.h>

unsigned char swap_bits(unsigned char octet)
{
  unsigned char T1 = octet << 4;
  unsigned char T2 = octet >> 4;
  return (T1 | T2);
}

int     main(void)
{
        itob(122);
        puts("\n");
        itob(swap_bits(122));
        puts("\n");
}