#include<stdio.h>
#include<stdlib.h>

int static count=0;

void reset(){
	count=0;
}

void inc(int k){
	count=count+k;
}

int getValue(){
	return count;
}
