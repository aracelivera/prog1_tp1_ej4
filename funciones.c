//desarrollo de las funciones
#include "funciones.h" //a todos los archivos.c le tengo q agregar el .h   xq ahí estan declaradas las liberias y las funciones
float RaizCuadrada(float x,float tol)
{
    float r1=1,r2=1;
    do
    {
        r1=r2;
        r2=0.5*(r1+(x/r1));

    }
    while(fabs(r2-r1)>=tol);
    return r2;
}
