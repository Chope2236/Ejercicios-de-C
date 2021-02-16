#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generadorPuerto();
int generadorPeso();

int main(){
    int idPuerto, idCont, peso, numPS, pesoCont;

    idCont = 1;
    while (idCont < 101)
    {
        peso  = 0;
        idPuerto = generadorPuerto();
        pesoCont = generadorPeso();

        printf("El contentedor %d con un peso de %dkg fue al puerto %d\n", idCont, pesoCont, idPuerto);
        idCont++; 
    }
        printf("El peso total del buque es %d", peso);
    


}



int generadorPuerto(){
    return((rand() % 3)+1); 
    }



int generadorPeso(){
    return(rand() % 1000); 
}

