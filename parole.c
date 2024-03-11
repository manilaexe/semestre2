//VERSIONE SBAGLIATA



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 20
#define S 25
/*
Realizzare un programma C che, dato come argomento da riga di comando il nome di un file (di testo), ne visualizzi il contenuto a pagine (20 righe alla volta). 
Dopo la visualizzazione di ciascun gruppo di righe, chiedere all’utente se vuole visualizzare le successive 20 
(o le restanti nel file se il file ha meno di 20 righe non ancora lette) o fermarsi.
*/

int open(char name[20], int count, int i){

    //int i=0;
    //int countI;
    char s[S];
    FILE *f;
    f=fopen(name,"r");
    if(f==NULL){
        perror("Errore nell'apertura del file... Programma terminato\n");
        exit(-1);
    }else{
        printf("Fatto\n");
    }

    //countI=N*count+1;
    printf("\nI=%d \n",i);
    
    while(i<(N*count)){
        fscanf(f,"%s",s);
        printf("%s ",s);
        i++;
        printf("\nI=%d \n",i);
    }

    //i=countI;
    fclose(f);

    return i;

}

/*void read(FILE *f){

    int i=0;
    char s[S];

    while(i<N){
        fscanf(f,"%s",s);
        printf("%s",s);
        i++;
    }

    printf("\n");
}*/

int main(){

    char n[20];
    char res;
    int g=1;
    int c=0;

    printf("\nInserire il nome del file da leggere: ");
    scanf("%s",n);
    //open(n);

    do{
        //read(f);
        c=open(n,g,c);
        g++;
        printf("\n%d \n",c);
        printf("\nLeggere altre 20 righe?(Y/N) ");
        scanf("\n%c",&res);
        printf("%c",res);
        while(res!='Y' && res!='N'){
            printf("\nRisposta non contemplata, inserirla nuovamente(Y/N): ");
            //printf("%c",res);
            scanf("\n%c",&res);
        }
    }while(res=='Y');



    return 0;
}