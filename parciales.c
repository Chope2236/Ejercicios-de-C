#include <stdio.h>

int main(){
    int legajo, aplazado=0, alumnos=0;
    float nota=0, nota4=0, nota7=0, mayor=0;
    
    printf("Ingrese legajo del alumno: \n");
    scanf("%d", &legajo);
    alumnos++;
    while (legajo != -1)
    {
    printf("Ingrese nota del alumno: \n");
    scanf("%f", &nota);
    if (nota > mayor)
    {
        mayor = nota;
    }
    if (nota > 10)
    {
        printf("La nota no puede ser mayor a 10");
    }else{
        if (nota >= 4 && nota < 7)
        {
            nota4++;
        }else{
            if (nota < 4)
            {
                aplazado++;
            }else{
                nota7++;
            }
            
        }
        
    }
    printf("Ingrese legajo del alumno: \n");
    scanf("%d", &legajo);
    alumnos++;
    }

    printf("La cantidad de alumnos con nota > 7 es de: %.2f\n", nota7);
    printf("La cantidad de alumnos con nota >= 4 y <7 es de: %.2f\n", nota4);
    printf("El porcentaje de alumnos aplazados es de: %d\n", aplazado*100/alumnos);
    printf("La cantidad total de alumnos es de: %d\n", alumnos);
    printf("La nota mas alta es de %.2f\n", mayor);
    
}