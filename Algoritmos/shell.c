#include "shell.h"
#include "vetor.h"

void shell (int* vetor, int dimensaoVetor) 
{
	int gap = dimensaoVetor / 2;

	while (gap > 0) 
	{
		int i;

		for (i = 0; i < dimensaoVetor - gap; i++) 
		{
			int j = i + gap;
			int tmp = vetor[j];
			while (j >= gap && tmp < vetor[j - gap]) 
			{
				vetor[j] = vetor[j - gap];
				j -= gap;
			}
			vetor[j] = tmp;
		}
		if (gap == 2)
			gap = 1;
		else
			gap /= 2.2;
	}
	imprimeVetor (vetor, dimensaoVetor);
}
