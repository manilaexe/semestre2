#include <stdlib.h>
#include <stdio.h>
#include "func.h"
#define DIM 256
int k=0;

typedef enum {FALSE, TRUE} boolean;


void ordina(int array[k]){
	qsort(array,k,sizeof(int),cmp);
	printf("Stampa array: ");
	for(int i=0; i<k; i++){
		printf("%d  ",array[i]);

	}
}

boolean ricerca_bin(int array[k], int el, int *pos){
	boolean ris=0;
	int m;
	int start=0, stop=k-1;

	while(stop>=start){ 	
		m=(start+stop)/2;
		if(array[m]==el){
			ris=1;
			*pos=m;
			return ris;
		}
		else if(array[m]>el){
			stop=m-1;
		}
		else if(array[m]<el){
			start=m+1;
		}
	}
	return ris;
}

int main(){

	int a[DIM];
	int i=0;
	int n=1;
	int el, pos;
	boolean ris;

	while(n!=0 && k<=DIM){
		printf("Inserire un elemento nell'array (0 per terminare): ");
		scanf("%d",&n);
		a[i]=n;
		i++;
		k++;
	}
	k=k-1;
	ordina(a);

	printf("\nInserire l'elemento da cercare: ");
	scanf("%d",&el);

	ris=ricerca_bin(a,el,&pos);
	if(ris==1){
		printf("Elemento -%d- trovato in posizione -%d-\n", el, pos+1);
	}
	else{
		printf("Elemento non trovato nell'array\n");
	}

	return 0;
}