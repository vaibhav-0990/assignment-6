#include<stdio.h>
int main()
{
    for(int j=1;j<=6;j++)
    {
        for(int i=1;i<=j;i++)
            printf("%c",64+i);

        for(int i=1;i<=6-j;i++)
            printf("%c",96+i);
        printf("\n");
    }
}
