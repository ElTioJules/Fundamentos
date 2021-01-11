/* 
 * File:   Problema_10.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 08:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    char l;
    char x[11];
    int y=0;
    printf("Escribe una palabra menor a 10 letras:\n");
    scanf("%s", x);
    y=0;
    while(x[y++] !='\0');
          l = y-1; printf("%s es de %d letras\n", x, l);
          printf("asi queda al reves papu uwu: ", x);
          y = l;
          while ( y > 0)
              printf("%c", x[--y]);
          
          
    

    return (EXIT_SUCCESS);
}

