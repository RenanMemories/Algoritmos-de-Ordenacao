#include "quicksort.h"
#include "vetor.h"

int Mediana3 (int* vetor,int ini, int mei, int fim)
{
	if(vetor [mei] >= vetor [ini])
	{
		if(vetor [mei] <= vetor [fim])
			return (mei);
		else
		{
			if (vetor [ini] <= vetor [fim])
				return (fim);
			else
				return (ini);
		}
	}
	else
	{
		if(vetor [mei] >= vetor [fim])
			return (mei);
		else
		{
			if(vetor [ini] <= vetor [fim])
				return (ini);
			else
				return (fim);
		}
	}
}
void quickmediana3 (int* vetor, int dimensaoVetor)
{
	int ini = 0, stack[128], pos = 0;
	
	for ( ; ; )
	{
		for ( ; ini + 1 < dimensaoVetor; dimensaoVetor++)
		{
			if (pos == 128)
				dimensaoVetor = stack [pos = 0];
			int k = ini + ((dimensaoVetor-ini)/2)-1;
			int pivo = vetor [Mediana3 (vetor, ini, k, dimensaoVetor - 2)];
			stack[pos++] = dimensaoVetor;
			for ( ; ; )
			{
				int right = ini-1;
				while (vetor[++right] < pivo);  
				while (pivo < vetor[--dimensaoVetor]);
				if (right >= dimensaoVetor)
					break;
				int temp = vetor[right];
				vetor [right] = vetor[dimensaoVetor];
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