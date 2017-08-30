#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int op;

int main()
{
    setlocale(LC_ALL,"");
    printf("Informe o mês:\n");
    scanf("%d", &op);
    switch(op)
    {
        case 1: printf("janeiro\n");
                break;
        case 2: printf("fevereiro\n");
                break;
        case 3: printf("março\n");
                break;
        case 4: printf("abril\n");
                break;
        case 5: printf("maio\n");
                break;
        case 6: printf("junho\n");
                break;
        case 7: printf("julho\n");
                break;
        case 8: printf("agosto\n");
                break;
        case 9: printf("setembro\n");
                break;
        case 10: printf("outubro\n");
                break;
        case 11: printf("novembro\n");
                break;
        case 12: printf("dezembro\n");
                break;

    }

    return 0;
}
