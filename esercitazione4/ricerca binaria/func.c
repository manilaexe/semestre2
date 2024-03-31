#include <stdlib.h>
#include <stdio.h>
#define DIM 256

extern int k;

int cmp(const void *a, const void *b){
	return(*(int*)a-*(int*)b);
}
