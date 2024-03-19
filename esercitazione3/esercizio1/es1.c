/*
Si scriva un programma in C che legga da tastiera una sequenza di numeri interi, uno alla volta, e li inserisca in un vettore di dimensione fisica DIM e 
dimensione logica N. L’inserimento termina quando l’utente inserisce 0 o quando l’array è pieno (ovvero quando sono stati già inseriti DIM elementi). OK

Letto un numero da tastiera, cercare tale numero nell’array mediante una ricerca esaustiva. OK

A tale scopo, implementare la funzione ricerca: 
int ricerca (vettore vet, int el, int N, int *pos) 
che dati in input un vettore, l’elemento da cercare e il puntatore alla posizione, restituisce 1 se l’elemento è presente nel vettore, 0 altrimenti.

*/

#include <stdlib.h>
#include <stdio.h>
#define N 256

int dim=0;

typedef int vettore [N];

int ricerca(vettore vet, int el, int n){
    int ris=0;
    for(int i=0; i<dim; i++){
        if(el==vet[i]){
            ris=1;
        }
    }
    return ris;
}

int main(){

    vettore a;
    int i=0;
    int n, x, ris;

    printf("\nInserire un valore nell'array (0 per terminare): ");
    scanf("%d",&n);


    while(n!=0 && dim<N){
        printf("\nInserire un valore nell'array (0 per terminare): ");
        scanf("%d",&n);
        a[i]=n;
        i++;
        dim++;
    }

    printf("\nInserire l'elemento da cercare: ");
    scanf("%d",&x); 

    ris=ricerca(a,x,dim);
    if(ris==1){
        printf("\nElemento trovato!\n");
    }else{
        printf("\nElemento non presente nel vettore\n");
    }

    return 0;
}