#include <stdio.h>

int main(int argc, char * argv[])
{

    char message[100]= "xqkwKBN{z0bib1wv_l3kzgxb3l_25l7k61j}";//insert the flag you have to decrypt here
    char destination[100];

    int i;
    int l;
    for(l=0;l<26;l++) //create the 26 possibilities
    {
      for(i=0;message[i] != 0;i++){
        if((message[i]>=65 && message[i]<=90)||(message[i]>=97 && message[i]<=122)) //test for beign a letter
        {
          if( ((message[i]+l)>90 && (message[i]+l)<122) ||  (message[i]+l)>122)
          {
            destination[i]= ((message[i]+l)-26);
          }
          else
          {
            destination[i] = (message[i]+l);
          }
        }
        else //this is part of the flag but this is not a letter
        {
          destination[i]=message[i];
        }
      }
      printf("%s\n",destination);
    }
    return 0;
}
