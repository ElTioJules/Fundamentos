/* 
 * File:   Problema_15.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 10:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int n=3, x=0;
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

