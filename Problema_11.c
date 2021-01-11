/* 
 * File:   Problema_11.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 09:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int x = 1, y = 0, z = 1, n = 0;
    printf("hasta que tabla quieres saber, perro? \n");
    scanf("%i", &n);
    printf("hasta que numero quieres que se multiplique, compa? \n");
    scanf("%i", &y);
    while(x<=n){
        z = 1;
        while(z<=y){
            printf("%i X %i = %i \n",x,z,x*z);
            z++;
        }
        printf("salto de linea uwu \n");
        x++;
       
       
    }

    return (EXIT_SUCCESS);
}

