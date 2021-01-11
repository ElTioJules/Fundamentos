/* 
 * File:   Problema_2.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 04:30 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a=0, b=0, c=0;
    printf("----de celcius a fahrenheit y kelvin---- \n");
    printf("cuantos celcius quieres convertir papu? \n");
    scanf("%f", &a);
    b = a * 1.8 + 32;
    c = a + 273.15;
    printf("en kelvin son: %F \nen fahrenheit son: %f \n", b, c );
    
    

    return (EXIT_SUCCESS);
}

