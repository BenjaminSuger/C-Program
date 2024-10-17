#include <stdio.h>

int main()
{
  int i,o,p,q;

  for(i=0;i<10;i++)
  {
    for(o=0;o<10;o++)
    {
      for(p=0;p<10;p++)
      {
        for(q=0;q<10;q++)
        {
          printf("%d%d%d%d\n",i,o,p,q);
        }
      }
    }
  }
}