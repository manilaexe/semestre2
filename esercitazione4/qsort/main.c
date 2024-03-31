#include <stdlib.h>
#include <stdio.h>
#include "func.h"
#define DIM 256
int k=0;

void ordina(int array[k]){
	qsort(array,k,sizeof(int),cmp);
	printf("Stampa array: \n");
	for(int i=0; i<k; i++){
		printf("%d  ",array[i]);

	}
}

int main(){

	int a[DIM];
	int i=0;
	int n=1;

	while(n!=0 && k<=DIM){
		printf("Inserire un elemento nell'array (0 per terminare): ");
		scanf("%d",&n);
		a[i]=n;
		i++;
		k++;
	}
	
	ordina(a);
	return 0;
}