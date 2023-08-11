typedef struct c_queue *queue;


/* ##SPECIFICA SINTATTICA:
     TIPI DI RIFERIMENTO:Queue;
     TIPI USATI:Item,boolean,integer;
     OPERATORI: */ 	queue newQueue(int maxSize);
		   	int emptyQueue(queue q);
		   	prenotazione dequeue(queue q);
		   	int enQueue(prenotazione val, queue q);
			void outputQueue(queue q);
			void outputItem(prenotazione val);
                     
            /*   [-----------]

   ##SPECIFICA SEMANTICA: 
          -newQueue(n)->q
               <>POST: q=NULL
  	  -emptyQueue(q)->int
               <>POST: se q==NULL ,allora int=1  else  int=0
	  -enQueue(e,q)->q'
               <>POST:  se q = nil allora q’ = <e> else se q = <a1, a2, … an> con n > 0 allora q’ = <e, a1, a2, … an >								
          -deQueue(q)->(an,q')
	       <>PRE: q = <a1, a2, …, an-1,an>  n>0  (q ≠ nil)
               <>POST: q’ = <a1,a2, …, an-1>
	  -outputQueue->q
	       <>PRE: q = <a1, a2, …, an-1,an>
	       <>POST: q = <a1, a2, …, an-1,an>
	*/
         

