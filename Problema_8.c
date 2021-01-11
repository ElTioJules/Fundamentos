/* 
 * File:   Problema_8.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 08:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int n=0, x=0;
    printf("introduce la cantidad de datos que quieras: \n");
    scanf("%d", &n);
    float a[n];
    for(x;x<n;x++){
        printf("introduce un dato: \n");
        scanf("%f",&a[x]);
    }
    x=0;
    float M=a[0];
    float m=a[0];
    for(x;x<n;x++){
        if(a[x]<m){
            m=a[x];
        }
        if(a[x]>M){
            M=a[x];
        }
    }
    printf("\nEl chiquito es (  ͡° ͜ʖ ͡° ) : %f",m);
    printf("\nEl grandote es (  ͡° ͜ʖ ͡° ) : %f", M);


    return (EXIT_SUCCESS);
}

