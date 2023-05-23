#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
void main ()
{
        int a=0,c=0;
        printf ("ingrese un numero");
        scanf("%d", &a);

        c=(a%2==0)?a+10:a-10;
        
        printf("c es igual a %d",c);
}

        