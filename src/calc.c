#include <stdio.h>
#include <math.h>
#include "calc.h"

double suma(double a, double b) 
{
    return a + b;
}

double resta(double a, double b)
{
    return a-b;
}


double multiplicació(double a, double b) 
{
    return a * b;
}


double divisió(double a, double b) 
{
    if (b == 0) {
        printf("Error: No es pot dividir per zero.\n");
        return 0;  
    }
    return a / b;
}


double potencia(double base, double exponent) 
{
    return pow(base, exponent);  
}


double arrel(double a) {
    if (a < 0) 
    {
        printf("Error: No es pot calcular l'arrel quadrada d'un nombre negatiu.\n");
        return -1;  
    }
    return sqrt(a);  
}


