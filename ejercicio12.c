#include <stdio.h>

int main(){
    int edad;
    printf("Ingrese la edad del socio:\n");
    scanf("%d", &edad);
    if (edad <= 12){
        printf("El socio es Menor\n");
    }else
    {
        if((edad >= 13) && (edad <= 18)){
            printf("El socio es Cadete\n");
        }else
        {
            if((edad >= 19) && (edad <= 26)){
                printf("El socio es Juvenil\n");
            }else
            {
                if (edad >= 27){
                    printf("El socio es Mayor\n");
                }
            }
            
        }
        
    } 
    
  system("pause");
}