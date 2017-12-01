#include "vetor.h"
#include "radix.h"
#include <stdlib.h>

void radix (int* vetor, int dimensaoVetor) 
{
	int i;

	int maior = vetor[0];
	for (i = 0; i < dimensaoVetor; i++) 
	{
		if (vetor [i] > maior)
			maior = vetor [i];
	}

	int *b = (int*) malloc ((dimensaoVetor - 1) * sizeof (int));
	int exp = 1;

	while (maior / exp > 0) 
	{
		int cont [10] = { 0 };
		for (i = 0; i < dimensaoVetor; i++)
			cont [(vetor[i] / exp) % 10]++; 
		for (i = 1; i < 10; i++)
			cont [i] += cont [i - 1];
		for (i = dimensaoVetor - 1; i >= 0; i--)
			b [--cont [(vetor[i] / exp) % 10]] = vetor[i];
		for (i = 0; i < dimensaoVetor; i++)
			vetor[i] = b[i];
		exp *= 10;
	}
	imprimeVetor (vetor, dimensaoVetor);
	free (b);
}