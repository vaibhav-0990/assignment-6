#include<stdio.h>
int main()
{
    int i,j;
    for(j=0;j<5;j++)
    {
        for(i=1;i<=10-2*j;i++)
            printf("A");
        printf("\n");
    }
}
