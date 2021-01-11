/* 
 * File:   Problema_22.c
 * Author: Espar
 *
 * Created on 10 de enero de 2021, 10:50 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * 
 */
int main(int argc, char** argv)
{
    float a=0, b=0, c=0;
    if(a== b && b == c){
        printf("es un triangulo equilatero");
    } else
          if(a>=b+c){
                printf("no es un triangulo");
          }else
                if((pow(a,2))=(pow(b,2))+(pow(c,2))){
                    printf("es un triangulo equilatero");
                }else
                    if((pow(a,2))>(pow(b,2))+(pow(c,2))){
                        printf("es un triangulo obtuso");
                    }else
                        
                        printf("el triangulo es agudo");
                    
        
    

    return (EXIT_SUCCESS);
}

