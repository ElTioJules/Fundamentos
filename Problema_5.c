/* 
 * File:   Problema_5.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 08:05 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n=0, x=0;
    float z=0, p=0;
    printf("introduce el numero de datos en el que deseas promediar: \n");
    scanf("%d", &n);
    float a[n];
    for(x;x<n;x++){
        printf("introduce el dato, mi prieto amigo: \n");
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

