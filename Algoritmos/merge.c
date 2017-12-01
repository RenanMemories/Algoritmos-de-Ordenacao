#include <stdlib.h>
#include "merge.h"
#include "vetor.h"

void mergesort_sort (int* vetor, int dimensaoVetor, int metade) 
{
	int i, j, k;
	int* aux = malloc (dimensaoVetor * sizeof (int));

	for (i = 0, j = metade, k = 0; k < dimensaoVetor; k++) 
	{
		aux [k]	=	j 	== 	dimensaoVetor 	? 	vetor [i++]
		: 			i	== 	metade 			? 	vetor [j++]
		: vetor [j] 	< 	vetor [i] 		?	vetor [j++]
		: vetor [i++];
	}
	for (i = 0; i < dimensaoVetor; i++)
		vetor [i] = aux [i];
	free (aux);
}
void mergesort (int* vetor, int dimensaoVetor) 
{
	if (dimensaoVetor < 2)
		return;
	int metade = dimensaoVetor / 2;
	mergesort (vetor, metade);
	mergesort (vetor + metade, dimensaoVetor - metade);
	mergesort_sort (vetor, dimensaoVetor, metade);
}
void merge (int* vetor, int	dimensaoVetor)
{
	mergesort (vetor, dimensaoVetor);
	imprimeVetor (vetor, dimensaoVetor);
}