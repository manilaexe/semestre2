#include<stdio.h>
#include<stdlib.h>
#include"contatore.h"

int main(){

 	int s;
	reset();
	printf("\nInserire un valore intero per l'incremento (0 per terminare): ");	
    	scanf("%d",&s);	
	inc(s);

	while(s!=0){
        printf("\nInserire un valore intero per l'incremento (0 per terminare): ");	
        scanf("%d",&s);	
        inc(s);	
	}

	printf("\nValore del contatore: %d",getValue());
	printf("\nProgramma terminato...\n");

	return 0;
}
