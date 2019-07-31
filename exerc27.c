#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int mat[20][20], col, lin, c, l, soma;
	
	argc = argc;
	argv = argv;
	
	printf ("numero de linhas:");
	scanf ("%d", &lin);
	
	printf ("numero de colunas:");
	scanf ("%d", &col);
	
	/* Armazena os valores fornecidos pelo usuário em uma matriz.*/
	for (l = 0; l < lin; l++)
	{
		for (c = 0; c < col; c++)
		{
			scanf ("%d", &mat[l][c]);
		}
	}
	
	/* percorre as colunas da matriz verificando quantos numeros um aparecem nelas.*/
	for (c = 0; c < col; c++)
	{
		soma = 0;
		for (l = 0; l < lin; l++)
		{
			soma += mat[l][c];
		}
		if (soma != 1)
		{
			printf ("A matriz nao e de permutacao");
			return 0;
		}
	}
	
	/* percorre as linhas da matriz verificando quantos numeros um aparecem nelas.*/
	for (l = 0; l < lin; l++)
	{
		soma = 0;
		for (c = 0; c < col; c++)
		{
			soma += mat[l][c];
		}
		if (soma != 1)
		{
			printf ("A matriz nao e de permutacao");	
			return 0;
		}
	}
	
	printf ("A matriz e de permutacao");
	
	return 0;
}
	
	