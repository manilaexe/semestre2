#include "func.h"

FILE* open(char nome[], char modo[]){
    FILE *f;
    f=fopen(nome,modo);
    if(f==NULL){
        perror("Errore nell'apertura del file...Programma terminato\n");
        exit(-1);
    }else return f;
}

void print(char v[20][DIM], FILE *f){ //stmapa nel nuovo file
    for(int i=0; i<20; i++){
        fprintf(f,"%s\n",v[i]);
    }
}

void funzioneAB(char v[20][DIM], FILE *f){ //riempe array
    studente s;
   
    for(int i=0; i<20; i++){
        fscanf(f, "%s %s", s.nome,s.cognome);
        strcpy(v[i],s.nome);
    }
}

int cmp(const void *a, const void *b){ //per il quick sort
    char a1[DIM];
    char b1[DIM];

    strcpy(a1,a);
    strcpy(b1,b);

    return strcmp(a1,b1);
}

