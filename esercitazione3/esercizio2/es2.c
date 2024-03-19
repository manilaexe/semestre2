/*
Dato un vettore di reali di dimensione DIM, si inseriscano k elementi letti da tastiera (k <= DIM). Si utilizzi 0 per terminare l’inserimento. Ordinare gli elementi del vettore in senso crescente utilizzando l’algoritmo Naive Sort.
Si stampi infine il vettore ordinato. 
Si strutturi il programma su più file.
*/
#include <stdlib.h>
#include <stdio.h>
#define N 256

int dim=0;

typedef int vettore [N];

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

    return 0;
}