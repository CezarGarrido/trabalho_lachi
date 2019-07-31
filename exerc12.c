#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int h, lin, col, aux1, aux2;
	
	argc = argc;
	argv = argv;
	
	scanf ("%d", &h);
	
	if (h > 0)
	{
		aux1 = 1;
		aux2 = h;
		for (lin = 1; lin <= h; lin ++)
		{
			for (col = 1; col <= h; col ++)
			{
				if (col == aux1 || col == aux2)
					printf ("X");
				else
					printf (" ");
			}
			printf ("\n");
			
			aux1 ++;
			aux2 --;
		}
	}
	else
		printf ("numero invalido");
	return 0;
}