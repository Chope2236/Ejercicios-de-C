#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int palabras = 0, a = 0, e = 0, i = 0, o = 0, u = 0, maslargo = 0, largo = 0;
    char input[50];
    gets(input);
    if (input[strlen(input) - 1] != '.')
    {
        printf("La oracion tiene que finalizar con un punto.\n");
        gets(input);
    }

    for (int j = 0; j < strlen(input); j++)
    {
        char c = input[j];
        if (isspace(input[j]))
        {
            // checkear si es espacio
            palabras++;
            largo = 0;
        }
        else
        {
            if (c != '.')
            {
                if (c == 'a' || c == 'A')
                {
                    a++;
                }
                else if (c == 'e' || c == 'E')
                {
                    e++;
                }
                else if (c == 'i' || c == 'I')
                {
                    i++;
                }
                else if (c == 'o' || c == 'O')
                {
                    o++;
                }
                else if (c == 'u' || c == 'U')
                {
                    u++;
                }
                largo++;
                if (largo > maslargo)
                {
                    maslargo = largo;
                }
            }
        }
    }
    printf("La oracion tiene %d palabras\n", palabras + 1);
    printf("Cantidad de veces que aparecieron las vocales: A=%d E=%d I=%d O=%d U=%d\n", a, e, i, o, u);
    printf("La palabra mas larga tiene %d letras", maslargo);
}