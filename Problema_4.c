/* 
 * File:   Problema_4.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 07:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void seleccion(int);
void M1();
void M2();
void M3();
void M4();

int main(int argc, char** argv) {
      int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito, que quieres? uwu: \n");
        printf("1 - una verdad bonita uwu\n");
        printf("2 - un consejo bien machin xd\n");
        printf("3 - dato cientifico, osi osi uwu\n");
        printf("4 - un recordatorio alentador uwu\n");
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
            M1();
            break;
        }
        case 2 :{
            M2();
            break;
        }
        case 3 :{
            M3();
            break;
        }
        case 4 :{
           M4();
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

void M1(){
    printf("\n tu waifu si te quiere uwu\n");
    
    system("cmd /c pause");
}

void M2(){
    printf("\n ya hablale, no te va a rechazar uwu\n");
    
    system("cmd /c pause");
}

void M3(){
    printf("\n la velocidad de la luz es de 300 mil kilometros por segundo, has flipao, eeh xd\n");
    
    system("cmd /c pause");
}  

void M4(){
    printf("\n ya casi salimos de vacaciones uwu\n");
   
    system("cmd /c pause");
}  