#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int N;
int n, p, k, primo;

int main()
{
    setlocale(LC_ALL,"");
    printf("Insira um n�mero para verifica��o:\n");
    scanf("%d",&p);
    printf("Insira um n�mero e descubra quais s�o os n�meros primos at� ele.\n");
    scanf("%d",&N);
    //Verifica se p � n�mero primo.

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
                printf("O n�mero %d � primo\n", p);
            }
            else
            {
                printf("O n�mero %d n�o � primo\n", p);
            }

    //Relaciona os n�meros primos entre 1 e N.

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

