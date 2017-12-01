#include "heap.h"
#include "vetor.h"

void heap (int* vetor, int dimensaoVetor) 
{
	int i;
	for (i = dimensaoVetor / 2 - 1; i >= 0; i--)
		acertaTopo (vetor, dimensaoVetor - 1, i);
	for (i = dimensaoVetor - 1; i > 0; i--) 
	{
		swap (vetor, 0, i);
		acertaTopo (vetor, i - 1, 0);
	}
	imprimeReverso (vetor, dimensaoVetor);
}
void acertaTopo (int* vetor, int fundo, int topo) 
{
	int tmp = vetor [topo];
	int prox = topo * 2 + 1;

	if (prox < fundo && vetor [prox] > vetor [prox + 1]) 
		prox++;
	while (prox <= fundo && tmp > vetor [prox]) 
	{
		vetor [topo] = vetor [prox];
		topo = prox;
		prox = prox * 2 + 1;
		if (prox < fundo && vetor [prox] > vetor [prox + 1])
			prox++;
	}
	vetor[topo] = tmp; 
}
void swap (int* vetor, int left, int right) 
{
	int tmp = vetor [right]; 
	vetor [right] = vetor[left];
	vetor [left] = tmp;         
}