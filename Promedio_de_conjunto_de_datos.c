/* 
 * File:   Promedio_de_conjunto_de_datos.c
 * Author: Espar
 *
 * Created on 23 de noviembre de 2020, 08:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    //declaracion de variables
    int n=0, x=0;
    float z=0, p=0;
  
    //Sinicio de codificacion
    printf("entroduce el numero de datos en el que deseas promediar: \n");
    scanf("%d", &n);
    float a[n];
    //esta variable es importante aqui
   
    //inicio del ciclo
    for(x;x<n;x++){
        printf("introduce el dato: \n");
        scanf("%f",&a[x]);
     
    }
    //fin de la codificacion
    x=0;
    for(x;x<n;x++){
        z=z+a[x];
     
    }
    (p=z/n);
    
    printf("%f", p);
    
    return (EXIT_SUCCESS);
}

