/* 
 * File:   Metodo_bubuja.c
 * Author: Espar
 *
 * Created on 25 de noviembre de 2020, 12:15 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=0, n=0, f=0;
    printf("metele el numero total de datos papu: \n");
    scanf("%i",&n);
    int a[n];
    for(x=0;x<n;x++){
        printf("introduce el dato wey: \n");
        scanf("%i",&a[x]);   
    }
    for(int y=0;y<n;y++){
        for(int z=0;z<n;z++){
            if(a[z]>a[z+1]){
                f=a[z+1];
                a[z+1]=a[z];
                a[z]=f;
                
                
            }
        }
    }
    for(int y=0 ;y<n;y++){
        
        printf("%i\n", a[y]);
     
    }
    


    return (EXIT_SUCCESS);
}

