#include <stdlib.h>
#include <string.h>
#include "vetor.h"
#include "radixbin.h"

int retornabit (int i)
{
	int j, cont = 0;
	j = i;
	while (j > 0)
	{
		j = j / 2;
		cont++;
	}
	return (cont);
}
void radixbin (int* vetor, int dimensaoVetor) 
{
	int i, j = 0, maior, exp;
	int* b;
	b = (int*) malloc (dimensaoVetor * sizeof (int));

	maior = vetor [0];
	for (i = 0; i < dimensaoVetor; i++) 
		if (vetor [i] > maior)
			maior = vetor [i];

	exp = retornabit (maior);
	while(j <= exp)
	{
		int cont [2] = {0};
		
		for(i = 0; i < dimensaoVetor; i++)
			cont [(vetor [i] >> j) & 0x01]++;
		for(i = 1; i < 2; i++)
			cont[i] += cont[i - 1];
		for(i = dimensaoVetor - 1; i >= 0; i--)
			b [--cont [(vetor [i] >> j) & 0x01]] = vetor [i];
		memcpy (vetor, b, 4 * dimensaoVetor);
		j++;
	}
	imprimeVetor (vetor, dimensaoVetor);
	free (b);
}