#include <stdio.h>
#include <stdlib.h>

void selection_sort(int * v, int tam, char * arquivo) {

    int i, j, k, min;
    FILE *lerascii;

    lerascii = fopen(arquivo, "r");

    for(k = 0; k < tam; k++) {
        fscanf(lerascii, "%d\n", &v[k]);
    }

    for (i = 0; i < (tam - 1); i++) {
        min = i;
        for (j = (i + 1); j < tam; j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        if (i != min) {
            int swap = v[i];
            v[i] = v[min];
            v[min] = swap;
        }
    }
    lerascii = fopen("BubbleOrganizado.txt", "w");

    for(k = 0; k < tam+1; k++) {
        fprintf(lerascii, "%d\n", k);
    }
}