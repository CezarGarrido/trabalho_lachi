
/*
Programa: exerc23.c
Descrição: 23. Escrever um programa que, dado um natural n, determine o número harmônico H(n) definido como sendo a somatória de 1/k, onde k varia de 1 a n.

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc23.exe exerc23.c -pedantic -Wextra -Wall

*/ 

#include <stdio.h> /*printf(), scanf() */

int main (int argc, char *argv[])
{
    int numero, k = 1;
    float soma=0;
	argc = argc;
	argv = argv;
	
    printf("Digite um numero: ");
    scanf("%d",&numero);

    for (k; k <= numero; k++)//5
    {
        soma = soma + 1.0 / k;
    }

    printf("H(n): %2.f", soma);

    return 0;
}