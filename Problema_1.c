/* 
 * File:   Problema_1.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 04:12 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=0, n=0, f=0;
    printf("metele el numero total de datos pls uwu: \n");
    scanf("%i",&n);
    int a[n];
    for(x=0;x<n;x++){
        printf("introduce el dato wey: \n");
        scanf("%i",&a[x]);   
    }
    for(int y=0;y<n;y++){
        for(int z=0;z<n;z++){
            if(a[z]>a[z+1]){
                f=a[z+1];
                a[z+1]=a[z];
                a[z]=f;
                
                
            }
        }
    }
    for(int y=0 ;y<n;y++){
        
        printf("%i\n", a[y]);
    }

    return (EXIT_SUCCESS);
}

