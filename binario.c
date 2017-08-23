#include <stdio.h>
#include <stdlib.h>

int N, i, binario[20];

int main()
{


    printf("Digite um numero:", N);
    scanf("%d",&N);
    while (N!=0)
    {
        for (i=20;i>=0;i--)
         {
            binario[i]=N%2;
            N=N/2;
            printf("%d",N);
         }
    }
    for (i=0;i<=20;i++)
    {
        printf("%d", binario[i]);
    }
    return 0;
}
