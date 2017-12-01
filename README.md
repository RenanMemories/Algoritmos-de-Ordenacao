# Algoritmos de Ordenacao
**Objetivo**

O objetivo deste trabalho é implementar algoritmos de ordenação, comparando-os entre si.

**Implementação (Parte I)**

Esse trabalho conta inicialmente com um programa para geração automática de números em C. Este programa, denominado gera, deverá se comportar da seguinte forma:

* Quando digitado `.\gera -a n`, o programa gera n números em ordem aleatória.
* Quando digitado `.\gera -c n`, o programa gera n números em ordem crescente.
* Quando digitado `.\gera -d n`, o programa gera n números em ordem decrescente.

Os números gerados são apresentados um por linha (sem espaço depois do número). Os dados obtidos com o algoritmo gera serão utilizados para testar os algoritmos de ordenação da seção seguinte.

**Implementação (Parte II)**

Os seguintes algoritmos de ordenação foram implementados em C:
*permutação, bubblesort, shakesort, insertionsort, shellsort, selectionsort, ranksort, quicksort recursivo, quicksort não-recursivo, mergesort, heapsort, radixsort, radixsort binário e bucketsort.

**Formatação de Entrada e Saída**

O trabalho é executado da seguinte maneira:
`./program algoritmo n < entrada.txt`

onde:
- *entrada.txt* será o arquivo com o resultado obtido com o algoritmo gera para n elementos;
- *n* é o número de elementos a serem ordenados;
- *algoritmo* é o algoritmo que será utilizado na ordenação. As opções são:
perm, bubble, shake, insertion, shell, selection, rank, quickrecursivoprimeiro, quickrecursivocentral, quickrecursivomediana3, quickprimeiro, quickcentral, quickmediana3, merge, heap, radix, radixbin e bucket.

A saída é composta pelos números da entrada ordenados.

Um exemplo da utilização do trabalho escolhendo-se o algoritmo Bubblesort para a ordenação de 10 números:
`./trab3 bubble 10 < entrada.txt`

**Compilação**

Ao digitar na pasta Algoritmos: `make all` São gerado os executáveis *gera* e *program*
