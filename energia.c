#include <stdio.h>

int main(){
    int menu, fuerza, trabajo, distancia, potencia, tiempo;

    printf("Antes que nada, definamos unos conceptos basicos\n");
    printf("Trabajo = Fuerza*Distancia\n");
    printf("Potencia = Trabajo/tiempo\n");
    printf("1 HP = 745 Watts\n\n\n\n\n\n");
    printf("1. Calcular potencia\n");
    menu = getch();
    switch (menu)
    {
    case '1':

    /* El ejercicio era "Se deben subir a 40m de altura 400 litros de agua, esto lo hace una bomba en 60 segundos,
     ¿cual es la potencia de la bomba?" */
        printf("Ingrese Fuerza en Kilogramos: \n");
        scanf("%d", &fuerza);
        printf("Ingrese Distancia en Metros:\n");
        scanf("%d", &distancia);
        printf("Ingrese tiempo en Segundos: \n");
        scanf("%d", &tiempo);
        trabajo = (fuerza*distancia)*9.8;
        potencia = trabajo/tiempo;
        printf("La energia necesaria es de %d Joules\n", trabajo);
        printf("La potencia es de %d Watts\n", potencia);
        break;

    default:
        break;
    }
}