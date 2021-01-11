/* 
 * File:   Problema_6.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 08:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x=0, y=0, z=0;
    int c=0;
    printf("introduce el primer numero:\n");
    scanf("%f", &x);
    printf("ingresa el segundo numero:\n");
    scanf("%f", &y);
    z=x+y;
    if(z<0){
        printf("el resultado es negativo\n");
    } else{
        printf("el resultado es positivo\n");
        
        
    }
    

    return (EXIT_SUCCESS);
}

