
typedef struct prenotazione *prenotazione; 

#define NULLITEM NULL

int eq(prenotazione x,prenotazione y); //vede se so uguali
prenotazione newitem(char* nome, char* cognome,char* codice_fiscale, int numpre); //mette 
void outputItem(prenotazione x); //stampa a schermo 
prenotazione cloneItem(prenotazione x); 
void destroy(prenotazione *x);
int inputItem(int prenotazioni);
void funz4(prenotazione x,int sportello,int sportello_2);
void riempiprenotazione(prenotazione x, char* cognome,  char* nome, char* codice_fiscale,int numpre);

