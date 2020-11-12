/* 
 * File:   tablas.c
 * Author: Espar
 *
 * Created on 11 de noviembre de 2020, 07:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x = 1, y = 0, z = 1, n = 0;
    printf("hasta que tabla quieres saber? \n");
    scanf("%i", &n);
    printf("hasta que numero quieres que se multiplique? \n");
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

