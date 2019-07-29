#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (int argc, char *argv[])
{
	int n, v[20], i, j, maior1, maior2, menor1, menor2, soma1, soma2;
	
	argc = argc;
	argv = argv;
	maior1 = maior2 = menor1 = menor2 = 0;
	
	scanf ("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		scanf ("%d", &v[i]);
		
		if (maior1 < v[i])
			maior1 = v[i];
		if (menor1 > v[i])
			menor1 = v[i];
	}
	soma1 = (maior1 + menor1);
	printf ("\nsoma1 = %d", soma1);
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (maior2 < v[i] && maior2 < maior1)
				maior1 = maior2 = v[i];
			if (menor2 > v[i] && menor2 > menor1)
				menor1 = menor2 = v[i];
		
		}
		soma2 = (maior2 + menor2);
		printf ("\nsoma2 = %d", soma1);
		if (soma1 != soma2)
			{
				printf ("\nA sequencia de elementos nao e balanceada");
				return 0;
			}
	}
	printf ("\nA sequencia de elementos e balanceada");
	
	return 0;
}