#include <stdio.h>


int main(void){
    int sueldo;
    int P=0;
    int PA=0;
    int PB=0;
    int PC=0;


        do
        {
            scanf("%d", &sueldo);

        if (sueldo <= 1999 && sueldo >! 0)
        {
            P++;
        }
        
        if (sueldo >= 2000 && sueldo < 3000){
            PA++;
        }

        if (sueldo >= 3000 && sueldo < 5000){
            PB++;
        }


        if (sueldo >= 5000){
            PC++;
        }


        } while (sueldo > 0 );
        

        

        if (sueldo == 0)
        {
            printf ("\n\n\n\n\n\n");
            printf ("%d Empleado(s) ganan menos de $2000\n", P);
            printf ("%d Empleado(s) ganan entre $2000 y $3000\n", PA);
            printf ("%d Empleado(s) ganan entre $3000 y $5000\n", PB);
            printf ("%d Empleado(s) ganan mas de $5000\n", PC);
            printf("\n\n\nThank you for using Payment Calculator");
            return 0;
        }
        



}


    
    