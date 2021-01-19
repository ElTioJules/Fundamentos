/* 
 * File:   newmain.c
 * Author: Espar
 *
 * Created on 18 de enero de 2021, 08:42 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones2.h"
/*
 * 
 */
int main(int argc, char** argv) {
    int a=0, b=0, c=0;
    float area=0;
    char inicial;
    printf ("agrega el valor de A: \n");
    scanf("%i", &a);
    printf ("agrega el valor de B: \n");
    scanf("%i", &b);
    
    c = suma(a,b);
    printf("c: %d\n", c);
    c = resta(a,b);
    printf("c: %d\n", c);
    
    
    area= area_c(2);
    printf("area: %f\n", area);
    inicial= primer("chelin");
    printf("primer: %c", inicial);
    
    

    return (EXIT_SUCCESS);
}

