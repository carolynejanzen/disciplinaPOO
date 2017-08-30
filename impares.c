#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, A, B, Y, X;

int main()
{
    setlocale(LC_ALL,"");
    printf("Insira dois números. Primeiro o menor; depois, o maior.\n");
    scanf("%d", &A);
    scanf("%d", &B);

    Y = ((B-A)-1);

    for(i=0; i<Y; i++)
    {
        X = A + 1;

        if(X % 2 != 0)
        {
           printf("%d ", X);
        }
        A++;
    }

    return 0;
}
