#include <stdio.h>

void bubble_sort (int vetor[], int n, char *arquivo) {
    int k, j, aux;

    FILE *lerascii;

    lerascii = fopen(arquivo, "r");

    for(k = 0; k < n; k++) {
        fscanf(lerascii, "%d\n", &vetor[k]);
    }

    for (k = 1; k < n; k++) {
        for (j = 0; j < n - k; j++) {

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    fclose(lerascii);
    lerascii = fopen("BubbleOrganizado.txt", "w");

    for(k = 0; k < n+1; k++) {
        fprintf(lerascii, "%d\n", k);
    }
}