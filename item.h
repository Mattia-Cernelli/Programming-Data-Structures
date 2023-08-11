// File dell item.h

typedef int item;  // per ora l'item è un intero

#define NULLITEM 0  // NULLITEM è un elemento che viene restituito quando la precondizione di getfirst viene violata

int eq(item x,item y);   //verifica che i due item siano uguali
void input_item(item *x);  // puntatore poichè l'elemento verrà modificato
void output_item(item x);  //non si usa il puntatore perchè va solo visualizzato a video
item cloneItem(item);    //duplica l'item in un altro
void destroy(item *);  //elimina un item



