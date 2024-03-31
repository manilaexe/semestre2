#include <stdlib.h>
#include <stdio.h>
#define DIM 256
int k=0;

int cmp(const void *a, const void *b){
	return(*(int*)b-*(int*)a);
}

void ordina(int array[k]){
	qsort(array,k,sizeof(int),cmp);
	printf("Stampa array: \n");
	for(int i=0; i<k; i++){
		printf("%d  ",array[i]);

	}
}

void insert(int a[DIM]){

	int n=1;
	int i=0;

	while(n!=0 && k<=DIM){
		printf("\nInserire un elemento nell'array (0 per termianre): ");
		scanf("%d",&n);
		a[i]=n;
		i++;
		k++;
		ordina(a);	
	}
}