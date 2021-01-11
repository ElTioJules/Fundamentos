/* 
 * File:   Problema_17.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 10:35 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n = 20, x = 0, y = 1, z = 0, c = 0;
    printf("ingresar n \n");
    scanf("%i", &n);
    while(c<n ){
        (c++);
       (x = z + y);
       (z = y);
       (y = x);
       
       printf("%i \n", x);
      
    }

    return (EXIT_SUCCESS);
}

