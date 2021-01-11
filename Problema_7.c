/* 
 * File:   Problema_7.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 08:21 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n=0, c=0;
    printf("introduce la dimension del arreglo: \n");
    scanf("%i", &n);
    int a[n];
    for(c=0;c<n;c++){
        printf("introduce tu dato:\n");
        scanf("%i", &a[c]);
    }
    c=0;
    for(c=0; c<n;c++){
        printf("el dato esta en la posicion: %i \n", c );
    }
    return (EXIT_SUCCESS);
}

