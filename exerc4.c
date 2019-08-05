#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int n, lin, col, aux1, aux2, meio;
	
	argc = argc;
	argv = argv;
	
	scanf ("%d", &n);
	
	/* Divide o valor fornecido pelo usuário e encontra o meio*/
	meio = n / 2 + 1;
	aux1 = meio;
	aux2 = meio;
	
	/* Percorre as linhas e colunas para imprimir na tela os pontos e asteriscos*/
	for (lin = 1; lin <= n; lin ++)
	{
		for (col = 1; col <= n; col ++)
		{
			/* Define as posições em que os pontos e asteriscos devem ser impressos na tela*/
			if (col > aux1 || col < aux2)
				printf ("*");
			else
				printf (".");
		}
		/* Define a quantidade de asteriscos que devem ser impressos na tela (se o programa tiver
		ultrapassado a metade do numero de linhas, a quantidade de asteriscos impressos deve decrescer,
		caso contrari, o numero de asteriscos aumenta).*/
		if (lin < meio)
		{
			aux1 ++;
			aux2 --;
		}
		else
		{
			aux1 --;
			aux2 ++;
		}
		printf ("\n");
	}
	return 0;
}