#include<stdio.h>
#include<stdlib.h>

int static count;

void reset(){
	count=0;
}

void inc(int k){
	count=count+k;
}

int getValue(){
	return count;
}
