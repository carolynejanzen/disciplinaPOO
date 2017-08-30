#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
double A, B, C;
double D, X1, X2;
int main()
{
    setlocale(LC_ALL,"");
    printf("Insira o coeficiente A:\n");
    scanf("%lf",&A);
    printf("Insira o coeficiente B:\n");
    scanf("%lf",&B);
    printf("Insira o coeficiente C:\n");
    scanf("%lf",&C);

    D = pow(B,2) - 4*A*C;
    printf("%2.lf\n",D);
    if (D < 0)
    {
        printf("status 0\n");
        printf("Não há raiz real.\n");
    }
    else if (D == 0)
    {
        printf("status 1\n");
        X1= (-B)/(2*A);
        printf("A raiz da equação de 2º grau é:%2.lf\n",X1);
    }
    else if  (D > 0)
    {
        printf("status 2\n");
         X1= ((-B)+(sqrt(D)))/(2*A);
        printf("A primeira raiz da equação de 2º grau é:%2.lf\n",X1);
         X2= ((-B)-(sqrt(D)))/(2*A);
        printf("A segunda raiz da equação de 2º grau é:%2.lf\n",X2);
    }
    return 0;
}
