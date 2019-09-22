#include <stdio.h>
int main()
{
  int A = 65;
  for(int j=0; j<6; j++)
  {
    for(int i=0; i<6; i++)
    {
      A = 65;
      if(i >= 5-j)
      {
        printf("%c", A+i);
      }
      else
      {
        printf(" ");
      }
      A++;
    }
    A -= j;
    printf("\n");
  }
}