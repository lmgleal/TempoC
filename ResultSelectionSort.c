#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Selectionsort.h"
#include "report.h"
#include "proximo.h"

//------- Titulos de Cabecalho-------//

char *selsort1 = "Selection Sort 1k";
char *selsort5 = "Selection Sort 5k";
char *selsort10 = "Selection Sort 10k";
char *selsort50 = "Selection Sort 50k";
char *selsort100 = "Selection Sort 100k";
char *selsort500 = "Selection Sort 500k";

//------------- Arquivos--------------//

char *arquivo1k = "dtaleat1kuni1.txt";
char *arquivo5k = "dtaleat5kuni3.txt";
char *arquivo10k = "dtaleat10kuni2.txt";
char *arquivo50k = "dtaleat50kuni3.txt";
char *arquivo100k = "dtaleat100kuni0.txt";
char *arquivo500k = "dtaleat500kuni1.txt";

//------------ Selection Sort 1k--------------//

void sel1() {
    int vet1[1000];
    clock_t iniciosel1 = clock();
    selection_sort(vet1, 1000, arquivo1k);
    clock_t fimsel1 = clock();
    clock_t resultadosel1 = fimsel1 - iniciosel1;
    double elapsedsel1 = (fimsel1 - iniciosel1) * .001;
    report(selsort1, resultadosel1, elapsedsel1, 0);
}

//---------- Selection Sort 5k-----------//

void sel5() {
    int vet5[5000];
    clock_t iniciosel5 = clock();
    selection_sort(vet5, 5000, arquivo5k);
    clock_t fimsel5 = clock();
    clock_t resultadosel5 = fimsel5 - iniciosel5;
    double elapsedsel5 = (fimsel5 - iniciosel5) * .001;
    report(selsort5, resultadosel5, elapsedsel5, 0);
}

//---------- Selection Sort 10k-----------//

void sel10() {
    int vet10[10000];
    clock_t iniciosel10 = clock();
    selection_sort(vet10, 10000, arquivo10k);
    clock_t fimsel10 = clock();
    clock_t resultadosel10 = fimsel10 - iniciosel10;
    double elapsedsel10 = (fimsel10 - iniciosel10) * .001;
    report(selsort10, resultadosel10, elapsedsel10, 0);
}

//---------- Selection Sort 50k-----------//

void sel50() {
    int vet50[50000];
    clock_t iniciosel50 = clock();
    selection_sort(vet50, 50000, arquivo50k);
    clock_t fimsel50 = clock();
    clock_t resultadosel50 = fimsel50 - iniciosel50;
    double elapsedsel50 = (fimsel50 - iniciosel50) * .001;
    report(selsort50, resultadosel50, elapsedsel50, 0);
}

//---------- Selection Sort 100k-----------//

void sel100() {
    int vet100[100000];
    clock_t iniciosel100 = clock();
    selection_sort(vet100, 100000, arquivo100k);
    clock_t fimsel100 = clock();
    clock_t resultadosel100 = fimsel100 - iniciosel100;
    double elapsedsel100 = (fimsel100 - iniciosel100) * .001;
    report(selsort100, resultadosel100, elapsedsel100, 0);
}

//---------- Selection Sort 500k-----------//

void sel500() {
    int vet500[500000];
    clock_t iniciosel500 = clock();
    selection_sort(vet500, 500000, arquivo500k);
    clock_t fimsel500 = clock();
    clock_t resultadosel500 =  fimsel500 - iniciosel500;
    double elapsedsel500 = (fimsel500 - iniciosel500) * .001;
    report(selsort500, resultadosel500, elapsedsel500, 1);
}

int main() {

    proximo(1);
    sel1();
    sel5();
    sel10();
    sel50();
    sel100();
    sel500();
    proximo(0);
    return 0;
}