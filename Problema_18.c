/* 
 * File:   Problema_18.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 10:36 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n=0, x=0;
    printf("introduce el numero de datos que deseas: \n");
    scanf("%d", &n);
    float a[n];
    for(x;x<n;x++){
        printf("introduce el dato: \n");
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
    printf("\n el chiquito es (  ͡° ͜ʖ ͡° ) : %f",m);
    printf("\n el grandote es (  ͡° ͜ʖ ͡° ) : %f", M);

    return (EXIT_SUCCESS);
}

