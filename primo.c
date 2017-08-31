#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int N;
int n, p, k, primo;

int main()
{
    setlocale(LC_ALL,"");
    printf("Insira um número para verificação:\n");
    scanf("%d",&p);
    printf("Insira um número e descubra quais são os números primos até ele.\n");
    scanf("%d",&N);
    //Verifica se p é número primo.

    primo=0;
    for(k=1; k<=p; k++)
    {

            if((p%k)==0)
            {
                primo++;
            }

    }
            if(primo<2)
            {
                printf("O número %d é primo\n", p);
            }
            else
            {
                printf("O número %d não é primo\n", p);
            }

    //Relaciona os números primos entre 1 e N.

    for(n=1; n<N; n++)
    {
        primo=0;
        for(k=1; k<=n; k++)
        {
            if((n%k)==0)
            {
                primo++;
            }

        }
        if(primo<=2)
            printf("%d\n", n);

    }
   return 0;
}

