#include <stdio.h>
int i=0;
void comparar(char*, char*);

int main(){
    printf("Bienvenid@ al programa que comparara si dos palabras ingresadas son iguales entre si\n");
    char pal1[25], pal2[25];
    char *p1 = &pal1[0];
    char *p2 = &pal2[0];
    printf("Por favor introduzca su primera palabra:\n");
    scanf("%s", pal1);
    printf("Por favor introduzca su segunda palabra:\n");
    scanf("%s", pal2);
    comparar(p1, p2);
    if (i==1) printf("Las palabras son iguales");
    else printf("Las palabras son diferentes");
    return 0;
}

void comparar(char *p1, char *p2){
    for(int n=0;n<=25;n++)
    {
        if ((*p1)==(*p2)){
            p1++, p2++, i=1;
        }
        else
        {
            break;
        }
    }
}
