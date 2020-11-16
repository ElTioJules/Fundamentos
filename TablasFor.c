/* 
 * File:   TablasFor.c
 * Author: Espar
 *
 * Created on 15 de noviembre de 2020, 06:57 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x = 0, y = 0, z = 0, n = 0;
    printf("hasta que tabla quieres saber?: \n");
    scanf("%i", &n);
    printf("hasta que numero quieres que se multiplique?: \n");
    scanf("%i", &y);
    for(x=1;x<=n;x++){
        
        for(z=1;z<=y;z++){
            printf("%i X %i = %i \n",x,z,x*z);
            
        }
        printf("Esto es un salto de linea kawaii uwu \n");
        
    }   

    return (EXIT_SUCCESS);
}

