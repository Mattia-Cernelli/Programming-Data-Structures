#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "prenotazione.h"
#include "queue.h"

int main (void)
{
	queue T;
	prenotazione val,val1;
	bool flag=0;
	int scelta,x,n,tmp;
	int counter=0;
	int sportello=1;
	int sportello_2=2;
	int prenotazioni=0;
	int num;
	while(1)
	{
		printf("Scegli tra le seguenti opzioni:\n"
		       " 1) Crea gestore prenotazione;\n"
		       " 2) Input prenotazione\n"
		       " 3) Servire il prossimo cliente\n"
		       " 4) Visualizzare il numero di prenotazione che sta servendo uno sportello\n"
		       " 5) Visualizzare il numero di clienti in attesa di essere serviti\n"
		       " 6) Esci\n");

		scanf("%d",&scelta);

		switch(scelta)
		{

			case 1:
				T=newQueue(n);
				printf("gestore creato \n Al momento ci sono %d prenotazioni \n",prenotazioni);	
				break;
	
			case 2:
				tmp=inputItem(prenotazioni);
				prenotazioni++;
				printf("Al momento ci sono %d prenotazioni \n",prenotazioni);
				break;

			case 3:
				val=dequeue(T);
				val1=dequeue(T);
				flag=1;
				counter=counter+2;
				printf("Cliente servito!\n");
				prenotazioni=prenotazioni-2;
					if(prenotazioni==0)
						printf("Non ci sono più clienti!\n");
				break;
			
			case 4:
				printf("Inserisci il numero dello sportello :\n");
				scanf("%d",&num);
					if(num==1 && prenotazioni==1)
						printf("Lo sportello sta servendo il numero 1 \n");
					if(num==1 && prenotazioni==2)
						printf("Lo sportello sta servendo il numero 1 \n");
					if(num==1 && prenotazioni>2 && flag==0)
						printf("Lo sportello sta servendo il numero %d",prenotazioni-(prenotazioni-1));
					if(num==1 && prenotazioni>2 && flag==1)
						printf("Lo sportello sta servendo il numero %d",prenotazioni-counter);
					if(num==2 && prenotazioni==1)
						printf("Non ci sono clienti a questo sportello \n");
					if(num==2 && prenotazioni==2)
						printf("Lo sportello sta servendo il numero 2 \n");
					if(num==2 && prenotazioni>2 && flag==0)
						printf("Lo sportello sta servendo il numero %d",prenotazioni-(prenotazioni-1)+1);
					if(num==2 && prenotazioni>2 && flag==1)
						printf("Lo sportello sta servendo il numero %d",prenotazioni-counter+1);
					break;
			case 5:
				x=prenotazioni;
				printf("Devono essere serviti ancora %d clienti",x);
				break;
			case 6:
				exit(1);
		
			/*case 5:
				printf("La libreria contiene %d libri\n",NumeroLibri(T));  //root
				break;
			
			case 6:
				printf("La libreria è:\n");
				stampaLibreria(T);
				printf("\n");
				break;
	
			case 7:
				
				deleteLibro(T);
				break;
			
			case 8:
		
				if(cercaLib(T))
					printf("L'elemento è presente\n");
				
				else
					printf("L'elemento non è presente\n");

				break;
			case 9:
				LibSenzaCopie(T);
				break;
			case 10:
				printf("Inserisci codice isbn del libro a cui aggiungere:\n");
				scanf("%s",&isbn[0]);	
				printf("Quante copie aggiungere?:\n");
				scanf("%d",&x);	
				AddCopie(T, isbn, x);
				break;
			case 11:
				printf("Inserisci codice isbn del libro a cui togliere:\n");
				scanf("%s",&isbn[0]);	
				printf("Quante copie vuoi togliere?:\n");
				scanf("%d",&x);	
				SubCopie(T, isbn, x);
				break;	*/
		}	
	}	
}
