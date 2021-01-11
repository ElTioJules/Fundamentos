/* 
 * File:   PRoblema_24.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 11:13 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void operaciones(int);
void CaP();
void PaC();
void KaM();
void MaK();
int main(int argc, char** argv) {
    int x=0;
    do{
        x=0;
        system("cmd /c cls");
        printf("Escojale guerito uwu: \n");
        printf("1 - convertir de centimetros a pulgadas\n");
        printf("2 - convertir de pulgadas a centimetros\n");
        printf("3 - de kilometros a milla \n");
        printf("4 - de millas a kilometros\n");
        printf("5 - Abandonar, chale broh, no me dejes solo \n");
        printf("tons que quieres papi:");
        scanf("%d", &x);        
        operaciones(x);
        
    }
    while(x!=5);
    

    return (EXIT_SUCCESS);
}
void operaciones (int x){
    switch (x){
        case 1 :{
            CaP();
            break;
        }
        case 2 :{
            PaC();
            break;
        }
        case 3 :{
            KaM();
            break;
        }
        case 4 :{
            MaK();
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

void CaP(){
    printf("\n Metele los datos, guero: C: ");
    float c = 0;
    scanf("%f",&c);
    float f = c/2.5;
    printf("\n tus pulgadas son: %f \n",f);
    system("cmd /c pause");
}

void PaC(){
    printf("\n Metele los grados prieto: ");
    float c = 0;
    scanf("%f",&c);
    float k = c*2.5;
    printf("\n Tus centimetros son: %f \n",k);
    system("cmd /c pause");
}

void KaM(){
    printf("\n Metele los datos prieto: ");
    float f = 0;
    scanf("%f",&f);
    float c = f*0.621371;
    printf("\n las millas son: %f \n",c);
    system("cmd /c pause");
}  

void MaK(){
    printf("\n Metele los datos prieto: ");
    float f = 0;
    scanf("%f",&f);
    float k = f/0.621371;
    printf("\n Las millas son: %f \n",k);
    system("cmd /c pause");
}  
    
