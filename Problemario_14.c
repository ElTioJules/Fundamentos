/* 
 * File:   Problemario_14.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 09:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void operaciones(int);
void s();
void r();
void m();
void d();

int main(int argc, char** argv) {
    int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito uwu: \n");
        printf("1 - Suma de dos numeros broh \n");
        printf("2 - Resta de dos numeros \n");
        printf("3 - Multiplicacion de dos numeros \n");
        printf("4 - Division de dos numeros \n");
        printf("5 - Abandonar, chale broh, no me dejes solo \n");
        printf("tons que quieres papi:\n");
        scanf("%d", &x);        
        operaciones(x);
        
    }
    while(x!=5);

    return (EXIT_SUCCESS);
}
void operaciones (int x){
    switch (x){
        case 1 :{
            s();
            break;
        }
        case 2 :{
            r();
            break;
        }
        case 3 :{
            m();
            break;
        }
        case 4 :{
            d();
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

void s(){
    printf("\n Metele un dato guero:\n ");
    float c = 0;
    scanf("%f",&c);
    printf("\n Metele otro dato guero:\n ");
    float z = 0;
    scanf("%f", &z);
    float f = c+z;
    printf("\n El resultado es: %f \n",f);
    system("cmd /c pause");
}

void r(){
    printf("\n Metele un dato guero:\n ");
    float c = 0;
    scanf("%f",&c);
    printf("\n Metele otro dato guero:\n ");
    float z = 0;
    scanf("%f", &z);
    float f = c-z;
    printf("\n El resultado es: %f \n",f);
    system("cmd /c pause");
}

void m(){
     printf("\n Metele un dato guero:\n ");
    float c = 0;
    scanf("%f",&c);
    printf("\n Metele otro dato guero:\n ");
    float z = 0;
    scanf("%f", &z);
    float f = c*z;
    printf("\n Resultado es: %f \n",f);
    system("cmd /c pause");
}  

void d(){
     printf("\n Metele un dato guero:\n ");
    float c = 0;
    scanf("%f",&c);
    printf("\n Metele otro dato guero:\n ");
    float z = 0;
    scanf("%f", &z);
    float f = c/z;
    printf("\n El resultado es: %f \n",f);
    system("cmd /c pause");
}  
    

