

//qf = q * ((1 + j/100) + (1 + j/100)2 + ... + (1 + j/100)n)
#include <stdio.h>

int main()
{
    int q, j, n, i = 1;
    double soma = 0.0, qf = 0.0;
    printf("Digite q, j e n: ");
    scanf("%d %d %d", &q, &j, &n);
    for (i; i <= n; i++)
    {
        soma = soma + ((1 + (j / 100)) * i);
    }
    qf = q * soma;
    printf("A quantia final qf eh : %f", qf);
}