#include "shake.h"
#include "vetor.h"

void shake (int* vetor, int dimensaoVetor) 
{
	int i;

	for (i = 0; i < dimensaoVetor / 2; i++)
	{
		int j, swapped = 0;
		
		for (j = i; j < dimensaoVetor - i - 1; j++) 
		{
			if (vetor [j] > vetor [j + 1]) 
			{
				int tmp			= vetor [j];
				vetor [j]		= vetor [j + 1];
				vetor [j + 1]	= tmp;
				swapped			= 1;
			}
		}
		for (j = dimensaoVetor - 2 - i; j > i; j--) 
		{
			if (vetor[j] < vetor[j - 1]) 
			{
				int tmp			= vetor [j];
				vetor [j]		= vetor [j-1];
				vetor [j - 1]	= tmp;
				swapped			= 1;
			}
		}
		if(!swapped) 
			break;
	}
	imprimeVetor (vetor, dimensaoVetor);
}
