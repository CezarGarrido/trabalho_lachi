/*
Programa: exerc13.c
Descrição: 13. Fazer um programa para receber dois números do tipo unsigned int do usuário e determinar se um número é uma permutação do outro ou não. 

Programador: Cezar Garrido Britez e Felipe de Melo Batalha
RGM: 40101, 40093
Data da última modificação: 06/08/2019

Execução: gcc -o exerc13.exe exerc13.c -pedantic -Wextra -Wall

*/

#include <stdio.h>

void troca(int vetor[], int i, int j)
{
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void permuta(int vetor[], int inf, int sup)
{   
    
	if(inf == sup)
	{
        int  i = 0;
		for(i ; i <= sup; i++)
			printf("%d ", vetor[i]);
		printf("\n");
	}
	else
	{
        int i = inf;
		for(i; i <= sup; i++)
		{
			troca(vetor, inf, i);
			permuta(vetor, inf + 1, sup);
			troca(vetor, inf, i); // backtracking
		}
	}
}

int main(int argc, char *argv[])
{
	int v[] = {1, 2, 3, 4};
    
	int tam_v = sizeof(v) / sizeof(int);

	permuta(v, 0, tam_v - 1);

	return 0;
}