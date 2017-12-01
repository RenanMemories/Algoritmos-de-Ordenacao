#include "vetor.h"
#include "quicksort.h"

void quicksortrecursivomediana3 (int* vetor, int left, int right) 
{
	int i, j, x, y, k;
	i = left;
	j = right;
	k = (left + right) / 2;
	x = vetor [Mediana3 (vetor, left, k, right)];

	while(i <= j)
	{
		while(vetor [i] < x && i < right)
			i++;
		while(vetor [j] > x && j > left)
			j--;
		if(i <= j)
		{
			y = vetor [i];
			vetor [i] = vetor [j];
			vetor [j] = y;
			i++;
			j--;
		}
	}

	if (j > left)
		quicksortrecursivomediana3 (vetor, left, j);
	if (i < right)
		quicksortrecursivomediana3 (vetor, i, right);
}
void quickrecursivomediana3 (int* vetor, int dimensaoVetor)
{
	int esquerda = 0, direita;
	direita = dimensaoVetor - 1;
	quicksortrecursivomediana3 (vetor, esquerda, direita);
	imprimeVetor (vetor, dimensaoVetor);
}