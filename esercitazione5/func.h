#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 50

typedef struct{
    char nome[DIM];
    char cognome[DIM];
}studente;

FILE* open(char nome[], char modo[]);
void print(char v[20][DIM], FILE *f);
void funzioneAB(char v[20][DIM], FILE *f);
int cmp(const void *a, const void *b);

