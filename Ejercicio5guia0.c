//
// Created by palaz on 22/3/2024.
//
#include <stdio.h>
#include "Ejercicio5guia0.h"

void cambiar(int*A, int *B);

int main(){
    int a=2, b=3;
    printf ("valor antes de a: %d y de b: %d \n", a, b);
    cambiar(&a, &b);
    printf ("nuevo valor de a: %d y de b: %d", a, b);
    return 0;
}

void cambiar(int*A, int *B){
    int aux;
    aux = *A;
    *A = *B;
    *B = aux;

}

