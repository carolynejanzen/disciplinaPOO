#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL,"");
    int v=0, x=0, y=1, z=0, i;

    printf("Informe o n�mero a ser comparado:");
    scanf("%d", &v);
    for (i=0;i<v;i++)
    {
        z = x + y;
        if(z == v)
        {
            printf("O valor informado pertence � sequ�ncia de Fibonacci.\n");
            return 0;
        }
        x = y;
        y = z;
    }
    printf("O valor informado n�o pertence � sequ�ncia de Fibonacci.\n");
    return 0;
}
