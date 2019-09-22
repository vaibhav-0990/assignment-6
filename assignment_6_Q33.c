#include <stdio.h>

int main()
{
  int A = 86;
  for(int i=0; i<6; i++)
  {
    A -= (2*i + 1);
    for(int j=0; j<=i; j++)
    {
      printf("%c", A);
      A++;
    }
    printf("\n");
  }
  return 0;
}