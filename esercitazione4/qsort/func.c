#include <stdlib.h>
#include <stdio.h>
#define DIM 256

extern int k;

int cmp(const void *a, const void *b){
	return(*(int*)a-*(int*)b);
}

/*void ordina(int array[DIM]){
	qsort(array,k,sizeof(int),cmp);
	printf("K da func.c %d", k);
	printf("Stampa array: \n");
	for(int i=0; i<k; i++){
		printf("%d  ",array[i]);

	}
}*/