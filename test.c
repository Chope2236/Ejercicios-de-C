#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    
    int main(){
        int max;
        printf("Ingrese un numero: ");
        scanf("%d", &max);
        srand(time(NULL));
   
        printf("El numero random es: %d", (rand() % max));
    }
