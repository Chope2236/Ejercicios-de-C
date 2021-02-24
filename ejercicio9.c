#include <stdio.h>

int main(){
    int fecha1, fecha2;
    printf("Ingrese fecha en formato aaaammdd");
    scanf("%d", &fecha1);
    printf("Ingrese otra fecha en formato aaaammdd");
    scanf("%d", &fecha2);
    if (fecha1 > fecha2)
    {
        printf("%d Es la fecha mas reciente", fecha1);
    }else{
        printf("%d Es la fecha mas reciente", fecha2);
    }
    
}