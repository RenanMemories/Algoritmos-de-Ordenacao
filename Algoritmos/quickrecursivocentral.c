#include "vetor.h"
#include "quicksort.h"

void quicksortrecursivocentral (int* vetor, int left, int right) 
{
	int i = left, j = right;
	int tmp;
	int pivo = vetor [(left + right) / 2];

	while (i <= j) 
	{
	    while (vetor [i] < pivo)
			i++;
		while (vetor [j] > pivo)
			j--;
		if (i <= j) 
		{
			tmp = vetor [i];
			vetor [i] = vetor [j];
			vetor [j] = tmp;
			i++;
			j--;
		}
	};

	if (left < j)
		quicksortrecursivocentral (vetor, left, j);
	if (i < right)
		quicksortrecursivocentral (vetor, i, right);
}
void quickrecursivocentral (int* vetor, int dimensaoVetor)
{
	int i, esquerda = 0, direita;
	direita = dimensaoVetor - 1;
	quicksortrecursivocentral (vetor, esquerda, direita);
	imprimeVetor (vetor, dimensaoVetor);
}