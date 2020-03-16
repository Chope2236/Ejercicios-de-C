#include <stdio.h>
#include <string.h>

    struct structpersona
    {
        char name[20];
        int age;
        char city[15];
        int DNI;
    } mipersona;
int main(){
        
    int  _age;
    char _name[20], _city[15];
            printf("Ingrese Nombre:\n");
            scanf("%s", &_name);
            printf("Ingrese Edad:\n");
            scanf("%d", &_age);
            printf("Ingrese Ciudad:\n");
            scanf("%s", &_city);




    strcpy(mipersona.name,_name);
    mipersona.age = _age;
    strcpy(mipersona.city, _city);

    printf("Nombre:%s\n", _name);
    printf("Edad:%d\n", _age);
    printf("Ciudad:%s\n", _city);

    
}