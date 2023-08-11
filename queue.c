#include <stdio.h>
#include <stdlib.h>
#include "prenotazione.h"
#include "queue.h"
#define MAXQUEUE 100 		// dimensione massima di default

struct c_queue {
	prenotazione *vet;
	int size; 		// dimensione della coda
	int num_elem; 		// numero di elementi in coda
	int head, tail;
	};

queue newQueue(int maxSize)
{
	struct c_queue *q=malloc(sizeof(struct c_queue));
	if(q==NULL) 
		return NULL;
	if(maxSize<=0)
		q->size=MAXQUEUE; // usiamo la dimensione max di default
	else
		q->size=maxSize; // usiamo la dimensione max di input
	q->vet=malloc(q->size*sizeof(prenotazione));
	if(q->vet==NULL) 		// la malloc non ha allocato memoria per vet
	{ 
		free(q);
		return NULL;
	}
	q->num_elem=0; // se la coda è vuota q->head e q->tail sono indefiniti
		       // verranno definiti al primo inserimento
	return q;
}

int emptyQueue(queue q)
{
	if(q==NULL) 
		return -1;
	return (q->num_elem==0);
}

int enqueue(prenotazione val, queue q)
{
	if(q==NULL) 
		return -1;
	if(q->num_elem==q->size) 
		return 0; 	// coda piena
	if(q->num_elem==0)
		q->head=q->tail = 0; 		// coda vuota, inizializzo head e tail
	else 
		q->tail=(q->tail+1)%q->size; 	// operatore % per gestione circolare
	q->vet[q->tail]=val; 		// inserisco elemento
	q->num_elem++;
	return 1;
}

prenotazione dequeue(queue q)
{
	if(q==NULL) 
		return NULLITEM;
	if(q->num_elem == 0) 
		return NULLITEM; 	// coda vuota
	prenotazione result=q->vet[q->head]; 	// item da restituire
	q->head = (q->head + 1) % q->size; 	// operatore % per gestione circolare
	q->num_elem--;
	return result;
}

void outputQueue(queue q) 
{
	if(q==NULL) 
		return;
	if(q->num_elem == 0) 
		return;
	int pos; // indice posizione
		for(pos=q->head; pos != q->tail; pos = (pos+1) % q->size)
			outputItem(q->vet[pos]);
		outputItem(q->vet[q->tail]);
}

