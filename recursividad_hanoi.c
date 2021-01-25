/* 
 * File:   recursividad_hanoi.c
 * Author: Espar
 *
 * Created on 24 de enero de 2021, 07:11 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void mover(int n, char a, char b, char c){
    if(n>=1){
        mover( n-1, a, b, c);
        printf("el disco %d, se ha movido de la columna %c, a la columna %c\n", n, a, c);
        mover(n-1, b,a,c);
    }
}
int main(int argc, char** argv) {
    int n=0;
    printf("ingresa el numero de discos:\n");
    scanf("%d", &n);
    mover(n,'A', 'B', 'C');

    return (EXIT_SUCCESS);
}

