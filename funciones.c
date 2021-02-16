#include <stdio.h>
#include <conio.h>

int consulta(char *nombrearchivo);


FILE *fptr;


int main(){
    int asd;
    printf("llamando a la funcion consulta\n");
    asd = consulta("money.txt");
    printf("\nprimer valor de asd luego de la consulta = %d", asd);
    asd = consulta("money2.txt");
    printf("\nsegundo valor de asd luego de la consulta = %d", asd);
}



int consulta(char *nombrearchivo){
    int saldo_interno;
    (fptr = fopen(nombrearchivo,"r"));
    fscanf(fptr,"%d", &saldo_interno);
    return(saldo_interno);
}