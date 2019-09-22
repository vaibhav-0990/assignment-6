#include <stdio.h>

int main()
{
  int flag = 1, counter = 2;
  for(int i=0; i<7; i++)
  {
    flag = 1;
    counter = 2;
    for(int j=0; j<=i; j++)
    {
      printf("%d,", flag);
      flag += counter;
      counter++;
    }

    printf("\n");
  }
  return 0;
}