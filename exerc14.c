#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int n_lin, n_col, l, c, aux1, aux2;
	
	argc = argc;
	argv = argv;
	
	scanf ("%d", &n_lin);
	n_col = n_lin + (n_lin - 1);
	
	aux1 = n_col / 2;
	aux2 = aux1 + 2;
	
	for (l = 0; l < n_lin; l++)
	{
		for (c = 0; c < n_col; c++)
		{
			if (c > aux1 && c < aux2)
				printf ("*");
			else
				printf (" ");
		}
		aux1 -= 1;
		aux2 += 1;
		
		printf ("\n");
	}
	
	return 0;
}