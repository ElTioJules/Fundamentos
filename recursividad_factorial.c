/* 
 * File:   recursividad_factorial.c
 * Author: Espar
 *
 * Created on 24 de enero de 2021, 06:43 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
long factorial(long(n));

int main(int argc, char** argv) {
    int n=0;
    printf("ingresa el numero factorial:\n");
    scanf("%d", &n);
    for(int i=0;i<=n;i++ ){
        printf("%ld\n", factorial(i));
    }
    

    return (EXIT_SUCCESS);
}
long factorial(long(n)){
    if(n<=1){
        return 1;
    } else{
        return(n*factorial(n-1));
    }
}

