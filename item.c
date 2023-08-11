// File di item.c
#include <stdlib.h>
#include <stdio.h>
#include "item.h"

int eq(item x,item y)
{
 return x==y;
}

void input_item(item *x)
{
 scanf("%d",x);  //non si usa & poichè si è usato il puntatore,e quindi si ha già il uso indirizzo
}

void output_item(item x)
{
 printf("%d",x);
}

/* void destroy(item *x)
{
 if(*x!=NULL)
  free(*x);
} */


