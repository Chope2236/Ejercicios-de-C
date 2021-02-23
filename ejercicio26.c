#include <stdio.h>

int main(){
    int idCont, peso=0, idPuerto, mayorpeso, pesoCont, mayorCont;
    int puerto1=0, puerto2=0, puerto3=0;
    for (int i = 0; i < 3; i++)
    {
        printf("Ingrese ID del contenedor: \n");
        scanf("%d", &idCont);
        printf("Ingrese el peso del contenedor: \n");
        scanf("%d", &pesoCont);
        if (pesoCont > mayorpeso)
        {
            mayorpeso = pesoCont;
            mayorCont = idCont;
        }
        peso = peso + pesoCont;
        printf("Ingrese puerto de arribo: \n", idPuerto);
        scanf("%d", &idPuerto);
           
           while (idPuerto > 3)
           {  
            printf("Solo los puertos 1 , 2 y 3 estan disponibles!");
            scanf("%d", &idPuerto);
           }
        if(idPuerto == 1){
            puerto1++;
        }
        if(idPuerto == 2){
            puerto2++;
        }
        if(idPuerto == 3){
            puerto3++;
        }
    }

    if(puerto1 > puerto2){
        if(puerto1 > puerto3){
            printf("El puerto 1 tiene mas contenedores\n");
        }else{
            printf("El puerto 3 tiene mas contenedores\n");
        }
    }else{
        if(puerto2 > puerto3){
            printf("El puerto 2 tiene mas contenedores\n");
        }else{
            printf("El puerto 3 tiene mas contenedores\n");
        }
    }
        
            
            
            


    printf("El peso total del buque es de %d kg\n", peso);
    printf("El contenedor de mayor peso fue el %d\n", mayorCont);
}