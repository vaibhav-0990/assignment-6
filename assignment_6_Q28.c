#include <stdio.h>

int main()
{
  int A = 65;
  for(int j=0; j<5; j++)
  {
    A = 65;
    for(int i=0; i<5; i++)
    {
      if(j<4-i)
      {
        printf(" ");
      }
      else
      {
        printf("%c", A);
        A++;
      }
    }
    A--;
    for(int k=0; k<j; k++)
    {
      A--;
      printf("%c", A);
    }
    printf("\n");
  }
}