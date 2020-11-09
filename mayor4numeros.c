/* 
 * File:   main.c
 * Author: Espar
 *
 * Created on 8 de noviembre de 2020, 01:32 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
     int a = 0, b = 0, c = 0, d = 0;
    printf("introduce A \n");
    scanf("%i",&a);
    printf("introduce B \n");
    scanf("%i",&b);
    printf("introduce C \n");
    scanf("%i",&c);
    printf("introduce D \n");
    scanf("%i",&d);
    if ( a == b && a == c && a == d ){
        printf("Todos son iguales");
    } else
    if ( a > b && a > c && a > d ){
        printf(" 'A' es mayor");
    } else 
    if ( b > a && b > c && b > d ){
        printf(" 'B' mayor");
    } else 
    if ( c > a && c > b && c > d){   
        printf(" 'C' mayor");
    } else
        printf(" 'D' es mayor");
    
        
    

    return (EXIT_SUCCESS);
}

