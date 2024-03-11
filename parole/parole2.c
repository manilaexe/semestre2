#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 2000
#define S 25
#define RED "\e[0;31m"
#define WHITE "\x1b[0m"
/*
Realizzare un programma C che, dato come argomento da riga di comando il nome di un file (di testo), ne visualizzi il contenuto a pagine (20 righe alla volta). 
Dopo la visualizzazione di ciascun gruppo di righe, chiedere all’utente se vuole visualizzare le successive 20 
(o le restanti nel file se il file ha meno di 20 righe non ancora lette) o fermarsi.
*/

typedef struct{
    char p[S];
}parole;
int count=0;
int open(char name[20], parole par[N]){

    parole p[N];
    int size;
    int i=0;
    FILE *f;
    f=fopen(name,"r");
    if(f==NULL){
        perror("Errore nell'apertura del file... Programma terminato\n");
        exit(-1);
    }else{
        printf("Fatto\n");
    }

    while(fscanf(f,"%s\n",par[i].p)!=EOF){
        strcpy(p[i].p,par[i].p);
        i++;
    }    
    size=i;
    fclose(f);

    return size;

}

void read(parole p[N], int start, int stop){

    for(int i=start; i<stop; i++){
        count++;
        printf("%s ",p[i].p);
    }
    printf("\n");
}

int main(){

    char n[20]; //file name
    char res;
    int start=0, stop=20, size;
    parole p[N];


    printf("\nInserire il nome del file da leggere: ");
    scanf("%s",n);
    size=open(n,p);

    do{
		if((size-count)>0){
			read(p,start,stop);
			start=stop;
			stop=stop+20;
			printf("\nLeggere altre 20 righe?(Y/N) ");
			scanf("\n%c",&res);
			res=toupper(res);
			while(res!='Y' && res!='N'){
				printf(RED"\nRisposta non contemplata, inserirla nuovamente(Y/N): ");
				scanf("\n%c",&res);
				res=toupper(res);
				printf(WHITE);
			}		
		}else{
			printf("\nFile terminato...\n");
			break;
		}
    }while(res=='Y');

    printf("\nProgramma terminato...\n");

    return 0;
}
