#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetor.h"

void a (int* vetor, int dimensaoVetor)
{
	int i, j; srand (time (NULL));

	for (i = 0; i < dimensaoVetor; i++)
	{	
		int numero = rand()%dimensaoVetor + 1;
		vetor [i] = numero;
	}
	imprimeVetorArq (vetor, dimensaoVetor);
	free (vetor);
}
void c (int* vetor, int dimensaoVetor)
{
	int i;

	for (i = 0; i < dimensaoVetor; i++)
		vetor [i] = i + 1;

	imprimeVetorArq (vetor, dimensaoVetor);
	free (vetor);
}
void d (int* vetor, int dimensaoVetor)
{
	int i, cont = dimensaoVetor;	

	for (i = 0; i < dimensaoVetor; i++)
	{
		vetor [i] = cont;
		cont--;
	}
	imprimeVetorArq (vetor, dimensaoVetor);
	free (vetor);
}
int main (int argc, char* argv[])
{
	int dimensaoVetor = atoi (argv [2]);
	int* vetor = (int*) malloc (dimensaoVetor * sizeof (int));

	if (!strcmp (argv [1], "-a"))
		a (vetor, dimensaoVetor);
	if (!strcmp (argv [1], "-d"))
		d (vetor, dimensaoVetor);
	if (!strcmp (argv [1], "-c"))
		c (vetor, dimensaoVetor);

	return 0;
}