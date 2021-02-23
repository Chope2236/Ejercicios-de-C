#include <stdio.h>
#include <locale.h>

int main(){

    int anio, anioB, mes;
    printf("Ingrese año\n");
    scanf("%d", &anio);
    if (anio % 4 == 0 && anio % 100 != 0)
    {
     anio = anioB;   
    }else{
        anio = anio;
    }
    printf("Ingrese mes\n");
    scanf("%d", &mes);
    if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
        printf("El mes tiene 31 dias");
    }else{
            if(mes == 2){
        if(anio == anioB){
            printf("El mes tiene 29 dias");
        }else{
            printf("El mes tiene 28 dias");
            }
        }else{
            printf("El mes tiene 30 dias");
        }
    }


}