#include <stdio.h>

int main()
{
  int A = 65, counter = 1;
  for(int i=0; i<5; i++)
  {
    if(i > 1)
    {
      counter += i-1;
    }
    for(int j=0; j<i+counter; j++)
    {
      printf("%c", A);
    }
    printf("\n");
  }
}