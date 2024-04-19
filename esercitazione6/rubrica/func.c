#include "func.h"
int totp=0;

void insert(rubrica r){

    if(totp<DIM-1){
        printf("Nome: ");
        scanf("%s",r[totp].nome);

        printf("Cognome: ");
        scanf("%s",r[totp].cognome);

        printf("Numero di telefono: ");
        scanf("%s",r[totp].tel);

        totp++;
    }else{
        printf("Rubrica piena!");
        exit(-1);
    }
}

void print(rubrica r){

    for(int i=0; i<totp; i++){
        printf("%d. Nome: %s \t Cognome: %s\t Telefono: %s\n",i+1,r[i].nome,r[i].cognome,r[i].tel);
    }
}

int fcmp(persona *a, persona *b){

    int nome;

    if(strcmp((*a).cognome,(*b).cognome)!=0){
       return strcmp((*a).cognome,(*b).cognome); 
    }else{
        if(strcmp((*a).cognome,(*b).cognome)==0){
            return strcmp((*a).nome,(*b).nome);
        }
    }   
}