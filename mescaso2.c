#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i;
char mes[12]={'janeiro','fevereiro', 'mar�o', 'abril', 'maio', 'junho', 'julho', 'agosto', 'setembro', 'outubro', 'novembro', 'dezembro'};
int main()
{
    setlocale(LC_ALL,"");
    printf("Digite o n�mero indicativo do m�s:\n");
    scanf("%d", &i);
    printf("O m�s �: %c", mes[i]);

    return 0;
}
