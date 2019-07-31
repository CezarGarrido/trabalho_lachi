#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int resto, div, raiz, soma, i;
	
	argc = argc;
	argv = argv;
	
	for (i = 1000; i <= 9999; i += 1)
	{
		div = i / 100;
		resto = i % 100;
		raiz = sqrt (i);
		soma = div + resto;
		
		if (soma == raiz)
		{
			printf("%d \n", i);
		}
	}
	
	return 0;
}