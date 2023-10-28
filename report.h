#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void report(char *titulo, clock_t clockresult, double segundosresult, int n) {
    printf("\n******************************************\n");
    printf("              %s\n", titulo);
    printf("\nClocks: %.2f \n", (float)clockresult);
    printf("Tempo Mensurado: %.3f segundos", segundosresult);
    if (n = 1) {
        float minutosresult = (segundosresult / 60);
        printf("\nTempo Mensurado: %.2f minutos", minutosresult);
    }
    printf("\n******************************************\n");
}