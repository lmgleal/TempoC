#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bubblesort.h"
#include "report.h"
#include "proximo.h"

//------- Titulos de Cabecalho-------//

char *bubblesort1 = "Bubble Sort 1k";
char *bubblesort5 = "Bubble Sort 5k";
char *bubblesort10 = "Bubble Sort 10k";
char *bubblesort50 = "Bubble Sort 50k";
char *bubblesort100 = "Bubble Sort 100k";
char *bubblesort500 = "Bubble Sort 500k";

//------------- Arquivos--------------//

char *arquivo1k = "dtaleat1kuni1.txt";
char *arquivo5k = "dtaleat5kuni3.txt";
char *arquivo10k = "dtaleat10kuni2.txt";
char *arquivo50k = "dtaleat50kuni3.txt";
char *arquivo100k = "dtaleat100kuni0.txt";
char *arquivo500k = "dtaleat500kuni1.txt";

//------------ Bubble 1k--------------//

void bb1() {
    int vet1[1000];
    clock_t iniciobb1 = clock();
    bubble_sort(vet1, 1000, arquivo1k);
    clock_t fimbb1 = clock();
    clock_t resultadobb1 = fimbb1 - iniciobb1;
    double elapsedbb1 = (fimbb1 - iniciobb1) * .001;
    report(bubblesort1, resultadobb1, elapsedbb1, 0);
}

//---------- Bubble Sort 5k-----------//

void bb5() {
    int vet5[5000];
    clock_t iniciobb5 = clock();
    bubble_sort(vet5, 5000, arquivo5k);
    clock_t fimbb5 = clock();
    clock_t resultadobb5 = fimbb5 - iniciobb5;
    double elapsedbb5 = (fimbb5 - iniciobb5) * .001;
    report(bubblesort5, resultadobb5, elapsedbb5, 0);
}

//---------- Bubble Sort 10k-----------//

void bb10() {
    int vet10[10000];
    clock_t iniciobb10 = clock();
    bubble_sort(vet10, 10000, arquivo10k);
    clock_t fimbb10 = clock();
    clock_t resultadobb10 = fimbb10 - iniciobb10;
    double elapsedbb10 = (fimbb10 - iniciobb10) * .001;
    report(bubblesort10, resultadobb10, elapsedbb10, 0);
}

//---------- Bubble Sort 50k-----------//

void bb50() {
    int vet50[50000];
    clock_t iniciobb50 = clock();
    bubble_sort(vet50, 50000, arquivo50k);
    clock_t fimbb50 = clock();
    clock_t resultadobb50 = fimbb50 - iniciobb50;
    double elapsedbb50 = (fimbb50 - iniciobb50) * .001;
    report(bubblesort50, resultadobb50, elapsedbb50, 0);
}

//---------- Bubble Sort 100k-----------//

void bb100() {
    int vet100[100000];
    clock_t iniciobb100 = clock();
    bubble_sort(vet100, 100000, arquivo100k);
    clock_t fimbb100 = clock();
    clock_t resultadobb100 = fimbb100 - iniciobb100;
    double elapsedbb100 = (fimbb100 - iniciobb100) * .001;
    report(bubblesort100, resultadobb100, elapsedbb100, 0);
}

//---------- Bubble Sort 500k-----------//

void bb500() {
    int vet500[500000];
    clock_t iniciobb500 = clock();
    bubble_sort(vet500, 500000, arquivo500k);
    clock_t fimbb500 = clock();
    clock_t resultadobb500 =  fimbb500 - iniciobb500;
    double elapsedbb500 = (fimbb500 - iniciobb500) * .001;
    report(bubblesort500, resultadobb500, elapsedbb500, 1);
}

int main() {

    proximo(1);
    bb1();
    bb5();
    bb10();
    bb50();
    bb100();
    bb500();
    proximo(0);
    return 0;
}

