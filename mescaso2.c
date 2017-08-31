#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i;
char mes[12]={'janeiro','fevereiro', 'março', 'abril', 'maio', 'junho', 'julho', 'agosto', 'setembro', 'outubro', 'novembro', 'dezembro'};
int main()
{
    setlocale(LC_ALL,"");
    printf("Digite o número indicativo do mês:\n");
    scanf("%d", &i);
    printf("O mês é: %c", mes[i]);

    return 0;
}
