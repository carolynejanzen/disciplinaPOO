#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float mediasal, somasal=0, SF[50];
    int  i, F, acimamedia;
    setlocale(LC_ALL,"");
    printf("Quantos funcionarios a empresa possui?");
    scanf("%d",&F);
    acimamedia = 0;

    for(i=0;i<F;i++)
    {
        printf("Informe o sal�rio do funcion�rio %d:", i);
        scanf("%f", &SF[i]);
        somasal=somasal+SF[i];
    }
        mediasal=somasal/F;
    for(i=0;i<F;i++)
    {
        if(SF[i]>mediasal)
        {
            acimamedia ++;
        }
    }
    printf("%d funcion�rio ganha(m) sal�rio acima da m�dia", acimamedia);
    return 0;


}
