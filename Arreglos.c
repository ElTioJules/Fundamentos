/* 
 * File:   Arreglos.c
 * Author: Espar
 *
 * Created on 22 de noviembre de 2020, 07:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x[100];
    int y = 0;
    
    x[0]=2;
    x[1]=3;
    for(y=0;y<100;y++){
      
       (x[2]=x[0]+x[1]);
       (x[0]=x[1]);
       (x[1]=x[2]);
       printf("%i \n", x[2]);
    
    }
    
    
    
    

    return (EXIT_SUCCESS);
}

