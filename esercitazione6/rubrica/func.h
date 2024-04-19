#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM 20

typedef struct{
    char nome[20];
    char cognome[20];
    char tel[16];
}persona;

typedef persona rubrica[100];



void insert(rubrica r);
void print(rubrica r);
int fcmp(persona *a, persona *b);
int find(rubrica r, persona p);
