#include <stdio.h>
float numero;
short int reinicio, n=0, x=0;
short int a[4];

int main(){
    do{
        printf("Ingrese un número flotante para verlo en formato IEEE 754 en hexadecimal: ");  
        scanf("%f", &numero);
        unsigned char *p=(unsigned char *)&numero;
        printf("El resultado es: 0x"); 
        for (n=3;n>=0;n--){
            a[n] = *p;
            p++;
        }
        for (x=0;x<=3;x++){
            printf("%.2X", a[x]);
        }
        printf("\nQuiere reiniciar el programa? 1:reinciar/0:salir ");
        scanf("%hd", &reinicio);
    }while(reinicio==1);
    
    return 0;
}
