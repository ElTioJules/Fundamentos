/* 
 * File:   recursividad_fibonacci.c
 * Author: Espar
 *
 * Created on 24 de enero de 2021, 04:42 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void fibonacci(int x, int y, int n){
    int z;
    printf("%d\n", y);
    if(n>1){
        z = x+y;
        n--;
        fibonacci(y,z,n);
        
    }
    
}


int main(int argc, char** argv) {
    int n=0;
    printf("intruduce n: \n");
    scanf("%d", &n);
    
    fibonacci(0,1,n);
    

    return (EXIT_SUCCESS);
}

