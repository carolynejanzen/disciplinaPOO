#include <stdio.h>
#include <stdlib.h>
int salario, novosalario, somasalarioatual=0, somasalarioreajustado=0, diferenca=0;
char nome;

int main()
{

    printf("\n Escreva o nome:\n",nome);
    scanf("%c\n",&nome);
    printf("\n Informe o salario:\n",salario);
    scanf("%d\n",&salario);

    somasalarioatual=somasalarioatual+salario;


    do{
    if(salario>0&&salario<=150)
    {
        novosalario=salario+(salario*0,25);
    }
        else if(salario>150&&salario<=300)
        {
            novosalario=salario+(salario*0,20);
        }
        else if(salario>300&&salario<=600)
        {
            novosalario=salario+(salario*0,15);
        }
         else if(salario>600)
        {
            novosalario=salario+(salario*0,10);
        }
        somasalarioreajustado=somasalarioreajustado+novosalario;

    }while(nome=='fim');
    diferenca=somasalarioreajustado-somasalarioatual;

    printf("\n O somatorio dos salarios atuais e:",somasalarioatual);
    printf("\n O somatorio dos salarios reajustados e:",somasalarioreajustado);
    printf("\n A diferenca entre eles e:", diferenca);

    return 0;
}
