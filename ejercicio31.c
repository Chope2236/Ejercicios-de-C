#include <stdio.h>

int esprimo(unsigned long numero);
int main()
{
    unsigned long n;
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++)
    {
        if (esprimo(i) == 0)
        {
            printf("%d No es primo\n", i);
        }
        else
        {
            printf("%d Es primo\n", i);
        }
    }
}

int esprimo(unsigned long numero)
{
    for (int divisor = 2; divisor < numero; divisor++)
    {
        // si es divisible no es primo
        if (numero % divisor == 0)
        {
            return 0;
        }
    }
    return 1;
}