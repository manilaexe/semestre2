/*
Sapendo che il file elenco1.txt ha almeno 20 studenti, si scriva una funzione 
(funzionehe (ognuna al massimo di 50 char). 
Questa funzione (funzioneAB) riceve come pAB) per caricare i soli nomi dei primi venti studenti in un array V di 20 stringarametri il vettore V e il puntatore al file elenco1.txt più eventuali parametri a scelta, e restituisce void.

Nel main, si ordini il vettore V tramite una opportuna chiamata della funzione qsort e si stampi poi su un file di testo outputAB.txt il contenuto dell’array V.
*/
#include "func.h"

int main(){

    FILE *in;
    FILE *out;
    char s[20][DIM];

    in=open("elenco1.txt","r");
    out=open("out.txt","w");
    funzioneAB(s,in);
    qsort(s,20,DIM,cmp);
    print(s,out);
    fclose(in);
    fclose(out);    

    return 0;
}