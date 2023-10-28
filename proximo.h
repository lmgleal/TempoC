#include <stdio.h>
#include <stdlib.h>

void proximo(int n) {
    if (n == 1) {
        char prox[10];
        printf("\nA execucao deste programa demora de 4 a 6 minutos, envie Y para continuar a execucao...\n");
        scanf("%s", prox);
    } else {
        char saida[10];
        printf("\nEnvie Y para finalizar o programa...\n");
        scanf("%s", saida);
        printf("\n");
    }
}