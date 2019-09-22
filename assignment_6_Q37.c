#include <stdio.h>

int main()
{
  int counter = 4;
  for(int i=0; i<7; i++)
  {
    for(int j=0; j<8-i; j++)
    {
      printf("%d,", j*counter);
    }
    counter++;
    printf("\n");
  }
  return 0;
}