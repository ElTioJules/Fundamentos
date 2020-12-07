/* 
 * File:   Funciones.c
 * Author: Espar
 *
 * Created on 30 de noviembre de 2020, 08:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */

void operaciones(int);
void CaF();
void CaK();
void FaC();
void FaK();
void KaC();
void KaF();
int main(int argc, char** argv) {
    int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito uwu: \n");
        printf("1 - transformar como en transformers we, de  C a F\n");
        printf("2 - transformar como en transformers we, de C a k\n");
        printf("3 - transformar como en transformers we, de F a C\n");
        printf("4 - transformar como en transformers we, de F a K\n");
        printf("5 - transformar como en transformers we, de K a C\n");
        printf("6 - transformar como en transformers we, de K a F\n");
        printf("7 - Abandonar, chale broh, no me dejes solo \n");
        printf("tons que quieres papi:");
        scanf("%d", &x);        
        operaciones(x);
        
    }
    while(x!=7);
    
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
            FaC();
            break;
        }
        case 4 :{
            FaK();
            break;
        }
        case 5 :{
            KaC();
            break;
        }
        case 6 :{
            KaF();
            break;
        }

        case 7 :{
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

void FaK(){
    printf("\n Metele los grados prieto: ");
    float f = 0;
    float c = 0.5555555 * (f - 32);
    scanf("%f",&f);
    float k = c + 273;
    printf("\n Los grados son: %f \n",k);
    system("cmd /c pause");
}  
    
void KaC(){
    printf("\n Metele los grados prieto: ");
    float k = 0;
    scanf("%f",&k);
    float c = k - 273.15;
    printf("\n Los grados son: %f \n",c);
    system("cmd /c pause");
}                           

void KaF(){
    printf("\n Metele los grados prieto: ");
    float k = 0;
    scanf("%f",&k);
    float f = 1.8 * (k) + 32;
    printf("\n Los grados son: %f \n",k);
    system("cmd /c pause");
}  