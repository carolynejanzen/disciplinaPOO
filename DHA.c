#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int fatorial(int n)
{
    int i,r;
    r=1;
    for(i=n;i>=1;i--)
    {
        r=r*i;

    }return r;

}
float cosseno(float m)
{

    float cosA;
    cosA= (1-(pow(m,2)/fatorial(2))+(pow(m,4)/fatorial(4))-(pow(m,6)/fatorial(6))+(pow(m,8)/fatorial(8))-(pow(m,10)/fatorial(10)));

    return cosA;
}
int main()
{
    float D, A, DHOR, ALTURA;
    setlocale(LC_ALL,"");
    printf("Insira o valor da distância do observador ao cume da montanha\n");
    scanf("%f\n", &D);
    printf("Insira o valor do ângulo de observação em radianos\n");
    scanf("%f\n", &A);

    DHOR = D*cosseno(A);
    ALTURA = sqrt (pow(D,2)-pow(DHOR,2));

    printf("A distância horizontal é: %f", DHOR);
    printf("A altura da montanha é: %f", ALTURA);

    return 0;
}
