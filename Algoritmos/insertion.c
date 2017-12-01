#include "vetor.h"
#include "insertion.h"

void insertion (int* vetor, int tamanhoVetor) 
{
	int i, j, index;
	for (i = 1; i < tamanhoVetor; i++)
	{
		index = vetor [i];
		for (j = i; j > 0 && vetor [j - 1] > index; j--)
			vetor [j] = vetor [j - 1];
		vetor [j] = index;
	}
	imprimeVetor (vetor, tamanhoVetor);
}