/* 
 * File:   Problema_3.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 07:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n=0;
    printf("cuantos datos deseas introducir?\n");
    scanf("%i", &n);
    int a[n];
    for(int x=0;x<n;x++){
        printf("introduce algun dato uwu\n");
        scanf("%i", &a[x]);
    }
    
    for(int y=0; y<n; y++)
        printf("%i\n", a[y]);
    

    return (EXIT_SUCCESS);
}

