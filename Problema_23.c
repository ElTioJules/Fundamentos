/* 
 * File:   Problema_23.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 11:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void operaciones(int);
void cuadrado();
int main(int argc, char** argv) {
     int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito uwu: \n");
        printf("1 - elevar un numero al cuadrado\n");
        printf("2 - Abandonar, chale broh, no me dejes solo \n");
        printf("tons que quieres papi:");
        scanf("%d", &x);        
        operaciones(x);
        
    }
    while(x!=2);
    


    return (EXIT_SUCCESS);
}
void operaciones (int x){
    switch (x){
        case 1 :{
            cuadrado();
            break;
        }

        case 5 :{
            printf("Salir\n");
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }

}
void cuadrado(){
    printf("\n Introduce el numero que quieras elevar: \n ");
    float c = 0;
    scanf("%f",&c);
    float f = c*c;
    printf("\n El resultado es: %f.2 \n",f);
    system("cmd /c pause");
}

