#include "stdio.h"
#include "stdlib.h"
void main ()
{
        int a=0;
        printf ("ingrese un numero");
        scanf("%d", &a);

        if (a>=0)
        {
           printf ("es positivo");
           exit(0);
        }
        if (0>=a)
        {
           printf ("es negativo");
        }
      

}