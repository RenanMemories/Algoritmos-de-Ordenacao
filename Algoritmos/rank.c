#include "rank.h"
#include "vetor.h"
#include <stdlib.h>

void ranksort (int *vetor, int dimensaoVetor, int *indice) 
{
	int i, j;
	for (i = 0; i < dimensaoVetor; i++)
		indice [i] = 0; 
	for (i = 1; i < dimensaoVetor; i++) 
		for (j = 0; j < i; j++) 
		{
			if (vetor [j] <= vetor [i])
				indice [i]++;
			else
				indice [j]++; 
		}
}
void rearranjo (int *vetor, int dimensaoVetor, int *indice) 
{
	int i;
	int* aux = (int*) malloc ((dimensaoVetor - 1) * sizeof (int));
	for (i = 0; i < dimensaoVetor; i++)
		aux [indice [i]] = vetor [i];
	for (i = 0; i < dimensaoVetor; i++)
		vetor [i] = aux [i];
	free (aux);
}
void rank (int *vetor,int dimensaoVetor) 
{
	int i; 
	int* indice;
	indice = (int*) malloc ((dimensaoVetor - 1) * sizeof (int));
	ranksort (vetor, dimensaoVetor, indice); 
	rearranjo (vetor, dimensaoVetor, indice);
	imprimeVetor (vetor, dimensaoVetor);
	free (indice);
}
