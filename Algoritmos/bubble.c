#include "bubble.h"
#include "vetor.h"

void bubble (int* vetor, int dimensaoVetor)
{
	int i, j, swap, troca = 1;

	for (i = 0; i < (dimensaoVetor - 1) && troca; i++)
	{
		troca = 0;
		for (j = 0; j < dimensaoVetor - i - 1; j++)
			if (vetor [j] > vetor [j + 1])
			{
				troca = 1;
				swap			= vetor [j];
				vetor [j]		= vetor [j + 1];
				vetor [j + 1]	= swap;
			}
	}
	imprimeVetor (vetor, dimensaoVetor);
}