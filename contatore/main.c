#include<stdio.h>
#include<stdlib.h>
#include"contatore.h"

#define N 10

int count=0;

void reset(){
	count=0;
}

void inc(){
	count++;
}

int getValue(){
	return count;
}

int main(){

	reset();
	printf("\nValore del contatore (reset): %d",count);		
	
	for(int i=0; i<N; i++){
		inc();
		printf("\nValore del contatore: %d",getValue());		
	}

	printf("\nProgramma terminato...");

	return 0;
}