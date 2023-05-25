#include "stdio.h"
#include "stdlib.h"
#include "conio.h"
void main ()
{
        int i=0;
        printf ("pon un numero del 1 al 5");
        scanf("%d",&i);
        if (i<=0)
        {
            printf("nmms we");
            exit(0);
        }
        if(i>5)
        {
           printf("enserio cabron? ");
           exit(0);
        }
        
        for (; i < 5; i++);
        {
            if(i=1)
            {
                printf(" + ");
            }
             if(i=2)
            {
                printf(" -- ");
            }
             if(i=3)
            {
                printf(" +++ ");
            }
             if(i=4)
            {
                printf(" ---- ");
            }
             if(i=5)
            {
                printf(" +++++ ");
            }
        }
       } 