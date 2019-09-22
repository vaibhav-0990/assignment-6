#include <stdio.h>

int main()
{
  int A = 65, counter = 1;
  for(int i=0, counter=0; i<3; i++, counter++)
  {
    A = 65;
    for(int j=0; j<6+2*i; j++)
    {
      if (counter < 2)
      {
        printf("%c", A);
      }
      else
      {
        A += counter;
      }
    }
    printf("\n");
  }
  for(int i=0, counter=0; i<3; i++, counter++)
  {
    A = 65;
    for(int j=0; j<6-2*i; j++)
    {
      if (counter < 2)
      {
        printf("%c", A);
      }
      else
      {
        A += counter;
      }
    }
    printf("\n");
  }
  return 0;
}