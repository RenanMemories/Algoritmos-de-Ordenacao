#include "vetor.h"
#include "quicksort.h"

void quicksortrecursivoprimeiro (int *vetor, int left, int right)
{
	int i = left, j = right;
	int tmp;
	int pivo = vetor [left];

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
		quicksortrecursivoprimeiro (vetor, left, j);
	if (i < right)
		quicksortrecursivoprimeiro (vetor, i, right);
}

void quickrecursivoprimeiro (int *vetor, int dimensaoVetor)
{
	int i, esquerda = 0, direita;
	direita = dimensaoVetor - 1;
	quicksortrecursivoprimeiro (vetor, esquerda, direita);
	imprimeVetor (vetor, dimensaoVetor);
}