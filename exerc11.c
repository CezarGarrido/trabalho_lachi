#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
	int n, valor1, valor2, i, cont;
	
	argc = argc;
	argv = argv;
	
	printf ("Informe o valor de n:");
	scanf ("%d", &n);
	
	printf ("Informe %d valores\n", n);
	scanf ("%d", &valor1);
	cont = 1;
	
	for (i = 1; i < n; i += 1)
	{
		scanf ("%d", &valor2);
		
		if (valor1 != valor2)
		{
			cont += 1;
			valor1 = valor2;
		}
	}
	
	printf ("A sequencia e formada por %d segmentos de numeros iguais", cont);
	
	return 0;
}