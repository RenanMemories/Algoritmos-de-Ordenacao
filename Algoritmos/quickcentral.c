#include "quicksort.h"
#include "vetor.h"

void quickcentral (int* vetor, int dimensaoVetor)
{
	int ini = 0, stack [128], pos = 0;

	for ( ; ; )
	{
		for (; ini + 1 < dimensaoVetor; dimensaoVetor++)
		{
			if (pos == 128)
				dimensaoVetor = stack [pos = 0];
			int pivo = vetor [ini + ((dimensaoVetor - ini) / 2) - 1];
			stack [pos++] = dimensaoVetor;
			for ( ; ; )
			{
				int right = ini-1;
				while (vetor[++right] < pivo);
				while (pivo < vetor[--dimensaoVetor]);
				if (right >= dimensaoVetor)
					break;
				int temp = vetor [right];
				vetor [right] = vetor [dimensaoVetor];
				vetor [dimensaoVetor] = temp;
			}
		}
		if (pos == 0) 
			break;
		ini = dimensaoVetor;
		dimensaoVetor = stack [--pos];
	}
	imprimeVetor (vetor, dimensaoVetor); 
}