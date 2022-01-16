#include <stdio.h>
#include <string.h>

int transformar(int fecha);
int main()
{
    int fecha, fechamayor = 0, fechamenor = 0;
    char nombre[20], nombremayor[20], nombremenor[20];       
        printf("Ingrese nombre: ");
        scanf("%s", &nombre);
        while (strcmp (nombre, "fin") != 0){
        printf("Ingrese fecha de nacimiento(ddmmaaaa): ");
        scanf("%d", &fecha);
        int fechafinal = transformar(fecha);
        if (fechamenor == 0 )
        {
            fechamenor = fechafinal;
        }
        
            if (fechafinal >= fechamayor){
                /* fecha mayor = fechacon el numero mas grande */
                /* fecha menor = fecha con el numero mas chico */
                fechamayor = fechafinal;
                strcpy(nombremayor, nombre);
            }else if(fechafinal <= fechamenor){
                fechamenor = fechafinal;
                strcpy(nombremenor, nombre);
            }     
        printf("Ingrese nombre: ");
        scanf("%s", &nombre);
        }
        printf("La persona mas vieja es %s\n", nombremenor);
        printf("La persona mas joven es %s\n", nombremayor);
}

    int transformar(int fecha){
        /*de ddmmaaaa a aaaammdd*/
        return (fecha%10000)*10000+(fecha%1000000/10000)*100+(fecha/1000000);
    }