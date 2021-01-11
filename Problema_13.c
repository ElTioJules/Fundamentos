/* 
 * File:   Problema_13.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 09:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void operaciones(int);
void CaF();
void CaK();

int main(int argc, char** argv) {
     int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito uwu: \n");
        printf("1 - transformar como en transformers we, de  C a F\n");
        printf("2 - transformar como en transformers we, de C a k\n");
        printf("3 - Abandonar, chale broh, no me dejes solo \n");
        printf("tons que quieres papi: \n");
        scanf("%d", &x);        
        operaciones(x);
        
    }
    while(x!=3);
    
    

    return (EXIT_SUCCESS);
}
void operaciones (int x){
    switch (x){
        case 1 :{
            CaF();
            break;
        }
        case 2 :{
            CaK();
            break;
        }
        case 3 :{
            printf("Salir\n");
            break;
        }
        default:{
            printf("caso defecto\n");
            break;
        }
    }

}

void CaF(){
    printf("\n Metele los datos guero: C: ");
    float c = 0;
    scanf("%f",&c);
    float f = c * 1.8 + 32;
    printf("\n Los grados son: %f \n",f);
    system("cmd /c pause");
}

void CaK(){
    printf("\n Metele los grados prieto: ");
    float c = 0;
    scanf("%f",&c);
    float k = c + 273.15;
    printf("\n Los grados son: %f \n",k);
    system("cmd /c pause");
}

void FaC(){
    printf("\n Metele los grados prieto: ");
    float f = 0;
    scanf("%f",&f);
    float c = 0.5555555 * (f - 32);
    printf("\n Los grados son: %f \n",c);
    system("cmd /c pause");
}  



