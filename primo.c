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
    printf("Insira um valor limite, maior que o anterior, para obter a sequ�ncia de n�meros primos anteriores a ele.\n");
    scanf("%d",&N);
    //Verifica se p � n�mero primo.

    //Relaciona os n�meros primos de 1 a N.
    for(n=1; n<=N; n++)
    {
        primo=0;
        for(k=1; k<=n; k++)
        {
            if((n%k)==0)
            {
                primo++;
            }
        if(primo>2)
            printf("%d\n", n);
        }

    }
    return 0;
}

