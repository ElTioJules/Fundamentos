/* 
 * File:   ficheros.c
 * Author: Espar
 *
 * Created on 23 de enero de 2021, 08:10 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n=0, x=0, y=0;
    FILE * flujo = fopen("datos.txt", "rb");
    if(flujo==NULL){
        perror("error en la apertura del archivo");
        return 1;
    }
    char caracter;
    while(feof(flujo)== 0){
        caracter = fgetc(flujo);
        printf("%c", caracter);
        
    }
    fclose(flujo);
    printf(" se ha leido el archivo correctamente");
    return 0;
   

    return (EXIT_SUCCESS);
}

