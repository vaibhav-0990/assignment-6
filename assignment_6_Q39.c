#include <stdio.h>

int main()
{
  int a, b, coeff_a, coeff_b;
  printf("Enter a, b: ");
  scanf("%d%d", &a, &b);
  for(int i=0; i<7; i++)
  {
    for(int j=0; j<i+2; j++)
    {
      printf("(%d)(%d)", a, b+j);
    }

    printf("\n");
  }
  return 0;
}