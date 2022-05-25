#include <stdio.h>

int main()
{
    int n, z = 1, x = 0, y = 1;
    scanf("%d", &n);
    for (int i = 0; i < n-1; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    printf("%d\n", z);
}