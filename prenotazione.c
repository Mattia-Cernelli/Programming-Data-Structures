#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"prenotazione.h"

struct prenotazione {
	char cognome[30];
	char nome[20];
	char codice_fiscale[20];
	int numpre;
	};

int eq(prenotazione x,prenotazione y) //vede se so uguali
{
	if(strcmp(x->numpre,y->numpre)==0)
		return 1;
}

   
prenotazione newitem(char* cognome, char* nome, char* codice_fiscale,int numpre) //mette
{
struct prenotazione *x=malloc(sizeof(struct prenotazione));
	if (x!=NULL) 
	{
		strcpy(x->cognome,cognome);
	 	strcpy(x->nome,nome);
		strcpy(x->codice_fiscale,codice_fiscale);
	 	x->numpre=numpre;
	}
	return x;
} 	
	         
 
void outputItem(prenotazione x) //stampa a schermo 
{
	printf("%s,%s,%s,%d",x->cognome,x->nome,x->codice_fiscale,x->numpre);
}


prenotazione cloneItem(prenotazione x) 
{
	if (x==NULLITEM) 
	{
		return NULLITEM;
	}
	return newitem(x->cognome,x->nome,x->codice_fiscale,x->numpre);
}


void destroy(prenotazione *x)
{
if(*x!=NULLITEM)
        free(*x);
}

void riempiprenotazione(prenotazione x, char* cognome,  char* nome, char* codice_fiscale,int numpre)
{
 	strcpy(x->cognome,cognome);
 	strcpy(x->nome,nome);
	strcpy(x->codice_fiscale,codice_fiscale);
 	x->numpre=numpre;
}

void funz4(prenotazione x,int sportello,int sportello_2)
{
	int num;
	printf("Inserisci il numero dello sportello :\n");
	scanf("%d",&num);
	if(num==1)
		printf("Lo sportello sta servendo il numero %d",x->numpre);
	if(num==2)
		printf("Lo sportello sta servendo il numero %d",x->numpre+1);
}

int inputItem(int prenotazioni)
 {
 char cognome[30];
 char nome[20];
 char codice_fiscale[20];
 int numpre=prenotazioni; 
 prenotazione x;
 printf("Inserisci nome\n"); 
 scanf("%s",&nome[0]);
 printf("Inserisci cognome\n");
 scanf("%s",&cognome[0]);
 printf("Inserisci codice fiscale\n");
 scanf("%s",&codice_fiscale[0]);
 numpre++;
 printf("Il suo numero di prenotazione è: %d",numpre);
 x=newitem(cognome,nome,codice_fiscale,numpre);
 return numpre;
}
