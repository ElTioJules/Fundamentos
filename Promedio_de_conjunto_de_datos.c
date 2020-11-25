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
    int n=0, x=0;
    float z=0, p=0;
    printf("entroduce el numero de datos en el que deseas promediar: \n");
    scanf("%d", &n);
    float a[n];
    for(x;x<n;x++){
        printf("introduce el dato: \n");
        scanf("%f",&a[x]);
     
    }
    x=0;
    for(x;x<n;x++){
        z=z+a[x];
     
    }
    (p=z/n);
    
    printf("%f", p);
    
    return (EXIT_SUCCESS);
}

