#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "insertionsort.h"
#include "report.h"
#include "proximo.h"

//------- Titulos de Cabecalho-------//

char *istsort1 = "Insertion Sort 1k";
char *istsort5 = "Insertion Sort 5k";
char *istsort10 = "Insertion Sort 10k";
char *istsort50 = "Insertion Sort 50k";
char *istsort100 = "Insertion Sort 100k";
char *istsort500 = "Insertion Sort 500k";

//------------- Arquivos--------------//

char *arquivo1k = "dtaleat1kuni1.txt";
char *arquivo5k = "dtaleat5kuni3.txt";
char *arquivo10k = "dtaleat10kuni2.txt";
char *arquivo50k = "dtaleat50kuni3.txt";
char *arquivo100k = "dtaleat100kuni0.txt";
char *arquivo500k = "dtaleat500kuni1.txt";

//------------ Insertion Sort 1k--------------//

void ist1() {
    int vet1[1000];
    clock_t inicioist1 = clock();
    insertion_sort(vet1, 1000, arquivo1k);
    clock_t fimist1 = clock();
    clock_t resultadoist1 = fimist1 - inicioist1;
    double elapsedist1 = (fimist1 - inicioist1) * .001;
    report(istsort1, resultadoist1, elapsedist1, 0);
}

//---------- Insertion Sort 5k-----------//

void ist5() {
    int vet5[5000];
    clock_t inicioist5 = clock();
    insertion_sort(vet5, 5000, arquivo5k);
    clock_t fimist5 = clock();
    clock_t resultadoist5 = fimist5 - inicioist5;
    double elapsedist5 = (fimist5 - inicioist5) * .001;
    report(istsort5, resultadoist5, elapsedist5, 0);
}

//---------- Insertion Sort 10k-----------//

void ist10() {
    int vet10[10000];
    clock_t inicioist10 = clock();
    insertion_sort(vet10, 10000, arquivo10k);
    clock_t fimist10 = clock();
    clock_t resultadoist10 = fimist10 - inicioist10;
    double elapsedist10 = (fimist10 - inicioist10) * .001;
    report(istsort10, resultadoist10, elapsedist10, 0);
}

//---------- Insertion Sort 50k-----------//

void ist50() {
    int vet50[50000];
    clock_t inicioist50 = clock();
    insertion_sort(vet50, 50000, arquivo50k);
    clock_t fimist50 = clock();
    clock_t resultadoist50 = fimist50 - inicioist50;
    double elapsedist50 = (fimist50 - inicioist50) * .001;
    report(istsort50, resultadoist50, elapsedist50, 0);
}

//---------- Insertion Sort 100k-----------//

void ist100() {
    int vet100[100000];
    clock_t inicioist100 = clock();
    insertion_sort(vet100, 100000, arquivo100k);
    clock_t fimist100 = clock();
    clock_t resultadoist100 = fimist100 - inicioist100;
    double elapsedist100 = (fimist100 - inicioist100) * .001;
    report(istsort100, resultadoist100, elapsedist100, 0);
}

//---------- Insertion Sort 500k-----------//

void ist500() {
    int vet500[500000];
    clock_t inicioist500 = clock();
    insertion_sort(vet500, 500000, arquivo500k);
    clock_t fimist500 = clock();
    clock_t resultadoist500 =  fimist500 - inicioist500;
    double elapsedist500 = (fimist500 - inicioist500) * .001;
    report(istsort500, resultadoist500, elapsedist500, 1);
}

int main() {

    proximo(1);
    ist1();
    ist5();
    ist10();
    ist50();
    ist100();
    ist500();
    proximo(0);
    return 0;
}