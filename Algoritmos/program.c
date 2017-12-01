#include <stdio.h>
#include <stdlib.h>
#include "perm.h"
#include "heap.h"
#include "rank.h"
#include "merge.h"
#include "radix.h"
#include "shell.h"
#include "shake.h"
#include "bubble.h"
#include "bucket.h"
#include "radixbin.h"
#include "quicksort.h"
#include "insertion.h"
#include "selection.h"

int main (int argc, char* argv[])
{
	if (argc != 3)
	{
		printf ("Argumentos invalidos\n");
		printf ("Insira no formato: \"./trab3 algoritmo n\" \n");
		printf ("As opções de algoritmo são:\n\nperm\nbubble\nshake\ninsertion"
				"\nshell\nselection\nrank\nquickrecursivoprimeiro\nquickrecursivocentral"
				"\nquickrecursivomediana3\nquickprimeiro\nquickcentral\nquickmediana3"
				"\nmerge\nheap\nradix\nradixbin\nbucket\n\n");
		exit (EXIT_FAILURE);
	}
	int i;
	long int dimensaoVetor = atoi (argv [2]);
	int* vetor = (int*) malloc (dimensaoVetor * sizeof (int));
	
	if (!strcmp (argv [1], "perm"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		perm (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "bubble"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		bubble (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "shake"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		shake (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "insertion"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		insertion (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "shell"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		shell (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "selection"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		selection (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "rank"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		rank (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "quickrecursivoprimeiro"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		quickrecursivoprimeiro (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "quickrecursivocentral"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		quickrecursivocentral (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "quickrecursivomediana3"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		quickrecursivomediana3 (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "quickprimeiro"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		quickprimeiro (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "quickcentral"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		quickcentral (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "quickmediana3"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		quickmediana3 (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "merge"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		merge (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "heap"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		heap (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "radix"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		radix (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "radixbin"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		radixbin (vetor, dimensaoVetor);
	}
	if (!strcmp (argv [1], "bucket"))
	{
		for (i = 0; i < dimensaoVetor; i++)
			scanf ("%d", &vetor [i]);
		bucket (vetor, dimensaoVetor);
	}
	free (vetor);
}