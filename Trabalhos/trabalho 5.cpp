#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	char cc;
	int freq;
	struct Node*prox;
}stNode;

typedef struct Lista{
	int n;
    stNode*first;
	stNode*last;
}stList;

stNode *geraNo(char c){
	stNode *no;
	no = (stNode*) malloc(sizeof(stNode));
	no -> cc = c;
	no -> freq = 1;
	no -> prox = NULL;
	return (no);
}

void registraDado(char c,stList*lst){
	stNode *no,*noNov,*noAnt;
	noAnt = NULL;
	no = lst->first;
			if(!no){
				lst -> first = geraNo(c);
				lst -> n+=1;
			}
			else
				do{
					if(no->cc == c ){
		 				 no->freq +=1;
		 				 break;
		 		}			
			else{
			   if(c < no->cc){
			   		noNov = geraNo(c);
			   		noNov->prox = no;
			   		lst->n += 1;
			   		if(noAnt)
			   			noAnt->prox = noNov;
			   		else
			   			lst->first = noNov;
			   		break;  		
			   }	
			else {
				noAnt = no;
				no = no->prox ;
			   }	
		      }
            }while(no);
      
    if(!no){ 
    noNov = geraNo(c);
    noNov->prox = NULL;
    lst->n += 1;
    if (noAnt != NULL){
	 noAnt->prox = noNov; 
	 }
   }	
}


void trocarposicao(stNode* no, stList* lst){
  stNode *noNov , *noAnt;
  noNov = lst->first;
  noAnt = NULL;
  
  if(!noNov){
    no->prox = NULL;
    lst->first = no;
    return;
  }

  do {
    if (noNov->freq >  no->freq) {
      if (noAnt) {
        noAnt->prox = no;
        no->prox = noNov;
      }
      else {
        no->prox = lst->first;
        lst->first = no;
      }
      return;
    }

    noAnt = noNov;
    noNov = noNov->prox;

  } while (noNov);

  if (noAnt){
   noAnt->prox = no; 
   no->prox = NULL;
  }
}


void organizar(stList* lst){
  stList novaLista;
  novaLista.first = novaLista.last = NULL;
  novaLista.n = 0;

  stNode *no, *proximo;
  no = lst->first;
  while (no) {
    proximo = no->prox;
    no->prox = NULL; 
    trocarposicao(no, &novaLista); 
    no = proximo;
  }


  lst->first = novaLista.first;
  lst->last = novaLista.last;
  lst->n = novaLista.n;
}


void mostraLista(stNode*no){
	 while(no){
	 	printf(" %c : %d \n",no->cc,no->freq);
		no = no->prox;
	}
	
}

void liberaLista(stList*lst){
	stNode *no = lst->first;
	while(no){
		lst->first = no->prox;
		free(no);
		no = lst->first;
		
	}
	
}

int main(void){
	FILE*pArq;
	char cc;
	
	stList myList;
	
	myList.first = myList.last = NULL;
	myList.n = 0;
	pArq = fopen("Texto.txt","r");

	if(!pArq){
		printf("\n Erro no arquivo texto.txt \n");
		exit(0);
    }
	
	fscanf(pArq,"%c",&cc);
	while(!feof(pArq)){
		registraDado(cc,&myList);
		fscanf(pArq,"%c",&cc);	
	}
	
	fclose(pArq);
	mostraLista(myList.first);
	
	printf("\nLista organizada:\n");
    organizar(&myList);
	
    mostraLista(myList.first);
    liberaLista(&myList);
	
	return(0);
}
