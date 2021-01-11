/* 
 * File:   Problema_12.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 09:09 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void seleccion(int);
void C1();
void C2();
void C3();
void C4();
int main(int argc, char** argv) {
     int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito, que quieres? uwu: \n");
        printf("1 - De peso a dolar\n");
        printf("2 - De dolar a peso\n");
        printf("3 - De peso a euro\n");
        printf("4 - De euro a peso\n");
        printf("5 - Abandonar, chale broh, no me dejes solo \n");
        printf("tons que quieres papi:\n");
        scanf("%d", &x);        
        seleccion(x);
        
    }
    while(x!=5);

    return (EXIT_SUCCESS);
}
void seleccion (int x){
    switch (x){
        case 1 :{
            C1();
            break;
        }
        case 2 :{
            C2();
            break;
        }
        case 3 :{
            C3();
            break;
        }
        case 4 :{
           C4();
            break;
        }
        case 5 :{
            printf("salido\n");
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }
}

void C1(){
    printf("\n cuantos pesos queres convertir, boludo?\n");
    float k = 0;
    scanf("%f",&k);
    float f = k/20.11;
    printf("\n son: %f, dolares \n",f);
    
    system("cmd /c pause");
}

void C2(){
    printf("\n cuantos dolares quieres convertir?:\n");
     float k = 0;
    scanf("%f",&k);
    float f = k*20.11;
    printf("\n son: %f, dolares \n",f);
    
    system("cmd /c pause");
}

void C3(){
    printf("\n ostia chaval, cuantos pesos quieres convertir?:\n");
     float k = 0;
    scanf("%f",&k);
    float f = k/24.50;
    printf("\n son: %f, euros chaval \n",f);
    
    system("cmd /c pause");
}  

void C4(){
    printf("\n cuantos euros quieres convertir wey?:\n");
     float k = 0;
    scanf("%f",&k);
    float f = k*24.50;
    printf("\n son: %f, pesos wey \n",f);
   
    system("cmd /c pause");
}  

