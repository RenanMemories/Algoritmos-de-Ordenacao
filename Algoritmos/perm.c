#include "perm.h"
#include "vetor.h"
#include <stdlib.h>

void ExchangeCharacters (int* str, int p1, int p2)
{
	int tmp;
	tmp = str[p1];
	str[p1] = str[p2];
	str[p2] = tmp;
}
void RecursivePermute (int* str, int k, int dimensaoVetor, int* vetor)
{
	int i, j, cont = 0;
	if (k == dimensaoVetor)
	{
		for (i = 0; i < dimensaoVetor; i++)
		{
			if (i + 1 == dimensaoVetor)
			{
				if (cont==0)
					for (j = 0; j < dimensaoVetor; j++)
						vetor [j] = str [j];
			}
			else
			{
				if (str [i] > str [i + 1])
					cont++;
			}
		}
	}
	else
	{
		for (i = k; i < dimensaoVetor; i++)
		{
			ExchangeCharacters (str, k, i);
			RecursivePermute (str, k + 1, dimensaoVetor, vetor);
			ExchangeCharacters (str, i, k);
		}
	}
}
void perm (int* str, int dimensaoVetor)
{
	int i;
	int* vetor;
	vetor = (int*)malloc(dimensaoVetor * sizeof (int));
	for (i = 0; i < dimensaoVetor;i++)
		vetor[i] = str[i];
	RecursivePermute (vetor,0,dimensaoVetor,str);
	imprimeVetor (str,dimensaoVetor);
	free (vetor);
}