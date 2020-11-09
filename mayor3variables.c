/* 
 * File:   mayor3variables.c
 * Author: Espar
 *
 * Created on 9 de noviembre de 2020, 11:05 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
   int x = 0, y = 0, z = 0;
    printf("introduce A \n");
    scanf("%i",&x);
    printf("introduce B \n");
    scanf("%i",&y);
    printf("introduce C \n");
    scanf("%i",&z);
    if ( x == y && x == z ){
        printf("Todos son iguales");
    } else
    if ( x > y && x > z ){
        printf(" 'A' es mayor");
    } else 
    if ( y > x && y > z ){
        printf(" 'B' mayor");
    } else {
        printf(" 'C' mayor");
    }
    return (EXIT_SUCCESS);
}

