#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int *v, int tam, char *arquivo) {
    int i, j, k, chave;

    FILE *lerascii;
    int *p = v;

    lerascii = fopen(arquivo, "r");

    for (j = 1; j < tam; j++) {
        chave = v[j];
        i = j - 1;
        while ((i >= 0) && (v[i] > chave)) {
            v[i + 1] = v[i];
            i--;
        }
        v[i + 1] = chave;
    }
    fclose(lerascii);
    lerascii = fopen("InsertionOrganizado.txt", "w");

    for(k = 0; k < tam + 1; k++) {
        fprintf(lerascii, "%d\n", k);
    }
    fclose(lerascii);
}