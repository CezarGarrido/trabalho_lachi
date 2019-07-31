#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
	int n, resto, div, cont = 0, soma = 0, mult;
	
	argc = argc;
	argv = argv;
	
	scanf ("%d", &n);
	div = n;
	
	while (div != 0)
	{
		resto = div % 10;
		div /= 10;
		if (resto < 8)
		{
			mult = resto * pow(8, cont);
			soma += mult;
			cont ++;
		}
		else
		{
			printf("Esse valor nao e octal");
			return 0;
		}
	}	

	
	printf ("%d", soma);
	
	return 0;
}