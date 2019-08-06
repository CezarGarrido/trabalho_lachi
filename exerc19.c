
/*
Programa: exerc19.c
Descrição: 19. Considere uma quantia q em reais aplicada por n anos consecutivos, a uma taxa anual de juros j, com o re-investimento dos juros ao longo do período. A quantia final qf, a ser resgatada após n anos, é calculada da seguinte forma:
qf = q * ((1 + j/100) + (1 + j/100)2 + ... + (1 + j/100)n)
Escrever um programa que calcule os resgates finais de acordo com os valores de q, j e n lidos do usuário.

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc19.exe exerc19.c -pedantic -Wextra -Wall

*/

#include <stdio.h> /*printf() */

int main (int argc, char *argv[])
{
    int q, j, n, i = 1;
    double soma = 0.0, qf = 0.0;

    argc=argc;
    argv=argv;

    printf("Digite q, j e n: ");
    scanf("%d %d %d", &q, &j, &n);
    for (i; i <= n; i++)
    {
        soma = soma + ((1 + (j / 100)) * i);
    }
    qf = q * soma;
    printf("A quantia final qf eh : %f", qf);

    return 0;
}