#include <stdio.h>

int main()
{
  int A = 65, counter = 1;
  for(int j=0; j<5; j++)
  {
    A = 65 + j;
    if(j > 1)
    {
      counter += j-1;
    }
    for(int i=0; i<j+counter; i++)
    {
      printf("%c", A);
      A++;
    }
    printf("\n");
  }
}
