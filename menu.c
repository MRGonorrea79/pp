#include "stdio.h"
#include "../lib/operacionesmen.h"
#include "../lib/operaciones.h"
#include "stdlib.h"

int main()
{
    int p=0;
    char b=' ';
    char* c=" ";  /**char letra=" */
do{
 printf("Bienvenidos a galletas Angulo :3\n   \tMENU  \n1.pasteles \n2. helados \n3.pastas \n4.galletas");
printf("\n seleccione un producto");
scanf("%i",&p);
} while (p>3 || p<1 || p==b);
/*&& (producto==letra)*/

funcion1(p);

int producto2=funcion1(p);

funcion2(p,producto2);

return 0;
}