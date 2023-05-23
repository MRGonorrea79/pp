#include "stdio.h"
#include "stdlib.h"
void main ()
{
        int a=0;
        printf ("ingrese un numero");
        scanf("%d", &a);
        
        printf( (a%2==0)?"es par":"es impar");
}

        