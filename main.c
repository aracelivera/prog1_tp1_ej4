//Práctica 1 ej 4
#include "funciones.h"//como elmain es .c le tengo que agregar este include
int main()
{
    float res,a,tol;
    do
    {
        printf("Ingrese un numero positivo 'A' y un valor de tolerancia 'tol':\t");
        scanf("%f%f",&a,&tol);
    }
    while(a<0);
    res=RaizCuadrada(a,tol);
    printf("\nLa raiz cuadrada de %f, con tolerancia %f, es: %f",a,tol,res );

    return 0;

}

