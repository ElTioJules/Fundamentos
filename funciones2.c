/* 
 * File:   funciones2.c
 * Author: Espar
 *
 * Created on 18 de enero de 2021, 08:42 PM
 */

#include "funciones2.h"

float PI = 3.1452;

int suma (int a, int b){
    return a+b;
}
int resta (int a, int b){
    return a-b;
}
char primer (char* cadena){
    return cadena[0];
}
double area_c (int radio){
    return PI*radio*radio;
}

