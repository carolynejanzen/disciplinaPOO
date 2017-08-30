#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n;
float i /*juros mensais*/, JP /*juros pagos no mês*/, JPA/*juros pagos acumuladamente*/, VP /* valor a pagar*/;
float A/*quanto será pago por mês até quitar o empréstimo*/, P /*valor do empréstimo*/, SC /*saldo concorrente*/;

int main()
{
    printf ("Informe o valor do emprestimo tomado:\n", P);
    scanf("%f", &P);
    printf("Informe o valor das prestacoes mensais:\n", A);
    scanf("%f", &A);
    printf("Informe o valor dos juros mensais sobre o emprestimo:\n", i);
    scanf("%f",&i);

    n=1;

    do{
    JP=(P*((pow((1+i),n))-1))- (P*((pow((1+i),n-1))-1));
    printf("Os juros pagos no mes equivalem a:%.2f\n", JP);
    printf("A prestacao paga no mes %d foi de:%.2f\n", n, A);

    JPA=(P*((pow((1+i),n))-1));
    printf("Os juros acumulados ate o mes %d, foi de:%.2f\n", n, JPA);

    VP=P*((pow((1+i),n))- n*A);
    printf("O valor ainda por pagar e de:%.2f\n", VP);

    n++;
    }while (VP == 0);

    return 0;
}
