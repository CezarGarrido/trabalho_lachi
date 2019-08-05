#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int n, vetor[20], i, j, aux, soma1 = 0, soma2 = 0;
	
	argc = argc;
	argv = argv;
	/*maior1 = maior2 = menor1 = menor2 = 0;*/
	printf ("Informe o tamanho do vetor\n");
	scanf ("%d", &n);
	
	printf ("Informe os valores do vetor\n");
	for (i = 0; i < n; i++)
		scanf ("%d", &vetor[i]);
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (vetor[i] < vetor[j])
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	soma1 = vetor[i=0] + vetor[n-1];
	n--;
	
	for (j = 1; j < n; j++)
	{
		soma2 = vetor[j] + vetor[n-1];
		if (soma1 != soma2)
		{
			printf ("\nA sequencia de elementos nao e balanceada");
			return 0;
		}
		n --;
	}

	printf ("\nA sequencia de elementos e balanceada");
	
	return 0;
}