
#include <stdio.h>

int main()
{
    int numero, k = 1;
    float soma=0;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    for (k; k <= numero; k++)//5
    {
        soma = soma + 1.0 / k;
    }

    printf("H(n): %2.f", soma);

    return 0;
}