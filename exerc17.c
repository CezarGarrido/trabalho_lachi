/*
Programa: exerc17.c
Descrição: 17. Faça um programa que calcule log2(x), que é o logaritmo do valor real x digitado pelo usuário na base 2;

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc17.exe exerc17.c -pedantic -Wextra -Wall

*/

#include <stdio.h> //scanf(), printf()
#include <math.h> //necessária para usar as funções matemáticas, log2()


int main (int argc, char *argv[])
{
    int numero = 0;
    	
	argc = argc;
	argv = argv;

    printf("Digite o numero para calcular o log2(X): ");
    scanf("%d", &numero);

    printf("Log(%d) = %2.f", numero, log2(numero));

    return 0;
}