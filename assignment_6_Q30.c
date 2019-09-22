#include <stdio.h>

int main()
{
  int A = 65;
  for(int j=0; j<6; j++)
  {
    for(int i=0; i<=j; i++)
    {
      printf("%c", A);
      A++;
    }
    printf("\n");
  }
}