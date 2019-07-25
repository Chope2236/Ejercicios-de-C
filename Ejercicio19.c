#include <stdio.h>
#include <math.h>

int main(){
    int multiplosencontrados=0;
    int actual=1;
    int basta;
    printf("Elija Un Numero: ");
    scanf("%d",&basta);
    while (multiplosencontrados != basta){
        if (actual%3 == 0){
            if (actual%5 != 0){
                multiplosencontrados = multiplosencontrados+1;
                printf("Hay %d Multiplos Encontrados Y El Multiplo Es: %d\n", multiplosencontrados , actual);  
            }
        }
        actual = actual+1;
    }
}