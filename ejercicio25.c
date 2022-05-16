#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, lastnum;
    int vecesrepetido = 0, maxvecesrepetido = 0, numerorepetido;
    int color, lastcolor, rachanegro = 0, rachamayor = 0, vecesalternado = 0, maxalternado = 0;
    int negarlasegundadocena = 0, maxsegundadocena = 0;
    int MisResultados[50][2];
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        num = rand() % 37;
        /*0 = negro 1 = rojo*/
        color = rand() % 2;
        MisResultados[i][0] = num;
        MisResultados[i][1] = color;
        if (i == 0)
        {
            lastnum = num;
            lastcolor = color;
        }
        if (num <= 12 || num >= 23)
        {
            if (lastnum <= 12 || lastnum >= 23)
            {
                negarlasegundadocena++;
            }
            if (negarlasegundadocena > maxsegundadocena)
            {
                maxsegundadocena = negarlasegundadocena;
            }
        }
        else
        {
            negarlasegundadocena = 0;
            printf("%d - %d\n", MisResultados[i][0], MisResultados[i][1]);
            if (num == 0)
            {
                printf("LASTNUM = %d\n", lastnum);
            }
            if (color == 0 && lastcolor == 0)
            {
                rachanegro++;
                if (rachanegro > rachamayor)
                {
                    rachamayor = rachanegro;
                }
            }
            else
            {
                rachanegro = 0;
            }
            if (num == lastnum && i != 0)
            {
                vecesrepetido++;
                if (vecesrepetido > maxvecesrepetido)
                {
                    maxvecesrepetido = vecesrepetido;
                    numerorepetido = num;
                }
            }
            else
            {
                vecesrepetido = 0;
            }
            if (color != lastcolor && i != 0)
            {
                vecesalternado++;
                if (vecesalternado > maxalternado)
                {
                    maxalternado = vecesalternado;
                }
            }
            else
            {
                vecesalternado = 0;
            }

            lastnum = num;
            lastcolor = color;
        }
    }
    printf("Salio %d veces seguidas el negro\n", rachamayor + 1);
    if (maxvecesrepetido == 1)
    {
        printf("El numero %d se repitio %d vez\n", numerorepetido, maxvecesrepetido);
    }
    else if (maxvecesrepetido > 1)
    {
        printf("El numero %d se repitio %d veces\n", numerorepetido, maxvecesrepetido+1);
    }
    printf("Los colores Rojo y Negro salieron alternados %d veces\n", maxalternado + 1);
}
