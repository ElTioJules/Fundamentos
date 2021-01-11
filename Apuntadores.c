/* 
 * File:   Apuntadores.c
 * Author: Espar
 *
 * Created on 7 de diciembre de 2020, 08:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int variable = 20;
    int * apuntadorEntero = & variable;
    printf("este es el valor de la variable:%d \n", variable);
    * apuntadorEntero = 50;
    printf("Este orto es el valor despues del cambio:%d \n", variable);
    int array[6]={7, 4, -3, 5, 8, 200};
    int * ApuntadorArre = &array[0];
    ApuntadorArre++;
    ApuntadorArre--;
    ApuntadorArre+=4;
    ApuntadorArre-=4;
    


    return (EXIT_SUCCESS);
}

