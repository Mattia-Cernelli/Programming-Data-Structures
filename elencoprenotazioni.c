#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "prenotazione.h"
#include "queue.h"

struct gestore_prenotazione{
	queue gest;
	int sportello1=1;
	int sportello2=2;
	};

queue newgestore(int maxSize)
{
	struct gestore_prenotazione *gest=malloc(sizeof(struct prenotazione));
		if(gest==NULL)
			return NULL;
		if(maxSize <= 0)
			gest->size=MAXQUEUE; // usiamo la dimensione max di default
		else 
			gest->size=maxSize; // usiamo la dimensione max di input
		gest->vet=malloc((gest->size)*sizeof(prenotazione));
	if(gest->vet==NULL) 	// la malloc non ha allocato memoria per vet
	{ 
		free(gest);
		return NULL;
	}
	gest->head=gest->tail=0; 	// adesso head e tail sono inizializzati a 0
	return gest;
}

int emptyQueue(queue gest)
{
	if(gest==NULL) 
		return -1;
	return(gest->head==gest->tail); 	// condizione di coda vuota: head == tail
}

int enqueue(prenotazione x, queue gest)
{
	if(gest==NULL)
		return -1;
	if(gest->head==(gest->tail + 1) % gest->size) 
		return 0; 	// coda piena
		// a differenza di prima non dobbiamo distinguere il caso di coda vuota
		// perché head e tail sono sempre definiti
	gest->vet[gest->tail]=x; 	// inserisco elemento
	gest->tail=(gest->tail + 1) % gest->size; 	// operatore % per gestione circolare
	return 1;
}
