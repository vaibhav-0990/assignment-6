#include<stdio.h>
int main()
{
    for(int j=1;j<=6;j++)
    {
        for(int i=1;i<=j;i++)
            printf("%c",63+j+i);
        printf("\n");
    }
}
