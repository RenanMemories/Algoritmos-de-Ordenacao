#include "vetor.h"
#include "selection.h"

void selection (int* vetor, int dimensaoVetor)
{
	int i;
	for (i = 0; i < dimensaoVetor - 1; i++) 
	{
		int j, min = i;
		for (j = i + 1; j < dimensaoVetor; j++)
			if (vetor [j] < vetor [min]) 
				min = j;
		int tmp = vetor [i];
		vetor [i] = vetor [min];
		vetor [min] = tmp;
	}
	imprimeVetor (vetor, dimensaoVetor);
}
