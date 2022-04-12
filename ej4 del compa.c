#include <stdio.h>
#include <math.h>

int main()
{
    float x,tol,rAn=1,rAct=1; //nombres en mayusculas == MACROS

    printf("Ingrese un numero para calcular raiz: ");
    scanf("%f",&x);
    printf("Ingrese una tolerancia: ");
    scanf("%f",&tol);

    do
    {
        rAn=rAct;
        rAct=0.5*(rAn+(x/rAn));

    } while(fabs(rAn-rAct)>=tol);

    printf("La aproximacion es: %f",rAct);

    return (0);
}
