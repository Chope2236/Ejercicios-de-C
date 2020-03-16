#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

// En enteros
#define CHANCECONTAGIO 66
#define CHANCEMORIR 2
#define CHANCECURARSE 14

int main(){

    /* initialize random seed: */
    srand (time(NULL));

    // Numero de personas en la simulacion
    int maximoDeDias;
    int numeroDeSanos, numeroDeInfectados, numeroDeMuertos;
    int nuevosMuertos, nuevosCurados, nuevosInfectados;
    int dia = 0;
    
    printf("Ingrese el numero de habitantes del pais: ");
    scanf("%d", &numeroDeSanos);
    printf("Ingrese el Maximo De Dias de simulacion: ");
    scanf("%d", &maximoDeDias);
    printf("Ingrese el numero de infectados: ");
    scanf("%d", &numeroDeInfectados);
    
    numeroDeSanos -= numeroDeInfectados;

    for (int i = 0; i<maximoDeDias; i++){
        // Reseteo los counters
        nuevosMuertos = 0, nuevosCurados = 0, nuevosInfectados = 0;

        // Recorrer por cada infectado, y ver si muere o si contagia a un sano
        for(int j = 0; j < numeroDeInfectados; j++){
            if ((numeroDeSanos > 0) && ((rand() % 100) < CHANCECONTAGIO)){
                numeroDeInfectados++;
                numeroDeSanos--;
                nuevosInfectados++;
            }        
            if ((numeroDeInfectados > 0) &&((rand() % 100)< CHANCEMORIR)){
                    numeroDeInfectados--;
                    numeroDeMuertos++;
                    nuevosMuertos++;

                }
                else{
                    if((numeroDeInfectados > 0) && ((rand() % 100)  < CHANCECURARSE)){
                    numeroDeInfectados--;
                    numeroDeSanos++;
                    nuevosCurados++;
                    }
                }
            }

        printf("Hay %d nuevos muertos , %d nuevos infectados y %d nuevos curados en el dia %d\n", nuevosMuertos, nuevosInfectados, nuevosCurados, i);
        printf("Total poblacion Sana: %d / %d Infectados / %d Muertos\n", numeroDeSanos, numeroDeInfectados, numeroDeMuertos);
    }
}