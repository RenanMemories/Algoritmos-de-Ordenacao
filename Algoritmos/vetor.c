#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void imprimeVetorArq (int* vetor, int dimensaoVetor)
{
	FILE *entrada = fopen ("entrada.txt", "w");
	int i;

	for (i = 0; i < dimensaoVetor - 1; i++)
		fprintf (entrada, "%d\n", vetor [i]);
	fprintf (entrada, "%d", vetor [dimensaoVetor - 1]);
	fclose (entrada);
}
void imprimeVetor (int* vetor, int dimensaoVetor)
{
	int i;

	for (i = 0; i < dimensaoVetor; i++)
		printf ("%d\n", vetor [i]);
}
void imprimeReverso (int* vetor, int dimensaoVetor)
{
	int i, cont = dimensaoVetor - 1;

	for (i = 0; i < dimensaoVetor; i++)
	{
		printf ("%d\n", vetor [cont]);
		cont--;
	}
}
int verificaVetor (int* vetor, int elemento, int dimensaoVetor)
{
	int i;

	for (i = 0; i < dimensaoVetor; i++)
		if (vetor [i] == elemento)
			return 1;
	return 0;
}