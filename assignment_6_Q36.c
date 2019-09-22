#include <stdio.h>

int main()
{
  int flag = 0, counter = 4;
  for(int i=0; i<7; i++)
  {
    if(i < 4)
    {
      flag = i;
    }
    else
    {
      flag = 3;
    }
    for(int j=0; j<7-flag; j++)
    {
      printf("%d,", j*counter);
    }
    counter++;
    printf("\n");
  }
  return 0;
}