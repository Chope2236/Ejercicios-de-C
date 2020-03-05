#include <stdio.h>

int main(){
/////////////////////////////////////////////////INGRESO DE NUMEROS///////////////////////////////////////////////////////////////
        int lado1,lado2,lado3;
        printf("Ingrese el tamaño de lado 1:\n");
        scanf("%d",&lado1);
        printf("Ingrese el tamaño de lado 2:\n");
        scanf("%d",&lado2);
        printf("Ingrese el tamaño de lado 3:\n");
        scanf("%d",&lado3);
/////////////////////////////////////////////////EQUILATERO//////////////////////////////////////////////////////////////////////
        if (lado1 == lado2)
        {
            if ((lado2 == lado3) && (lado1 == lado3)){
                printf("Es un triangulo Equilatero.\n");
            }               
            
        }
////////////////////////////////////////////////ESCALENO////////////////////////////////////////////////////////////////////////
        if (lado1 != lado2)
        {
            if ((lado1 != lado3) && (lado2 != lado3))
            {
                printf("Es un triangulo Escaleno");
            }
            
            
        }
//////////////////////////////////////////////ISOSCELES////////////////////////////////////////////////////////////////////////
        if ((lado1 == lado2) && (lado3 != lado1))
        {
            printf("Es un triangulo Isosceles");
        }else
        {
            if ((lado2 == lado3) && (lado1 != lado2)){
            printf("Es un triangulo Isosceles");
            }else
        {
            if ((lado1 == lado3) && (lado2 != lado1))
            printf("Es un triangulo Isosceles");
        }
        }
        
        
        
        
        
        
        
}