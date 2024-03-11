#include<stdio.h>
#include<stdlib.h>
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