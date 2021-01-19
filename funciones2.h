/* 
 * File:   funciones2.h
 * Author: Espar
 *
 * Created on 18 de enero de 2021, 08:43 PM
 */

#ifndef FUNCIONES2_H
#define	FUNCIONES2_H

#ifdef	__cplusplus
extern "C" {
#endif
/*int suma (int a, int b);
int resta (int a, int b);
char primer (char* cadena);
double area_c (int radio); */

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




#ifdef	__cplusplus
}
#endif

#endif	/* FUNCIONES2_H */

