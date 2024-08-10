#include <stdio.h>
#include <stdlib.h>


typedef struct Elem{
	char c;
	int f;
}stelem;

typedef struct vet{
	int n;
	stelem *v;
}stvet;


void preencherVetor(FILE *arq,stvet*vet){
	vet->v = (stelem*) malloc(256*sizeof(stelem));
	vet->n = 0;
	int j;
	char cc;
	
	fscanf(arq,"%c",&cc);
	
	  while (!feof(arq)){
	 	for(j=vet->n-1 ; j>=0 ; j--){
	 		if(vet->v[j].c == cc)
	 		 break;	
		 }
		 if(j<0){
		 	vet->v[vet->n].c = cc;
		 	vet->v[vet->n].f = 1;
		 	vet->n +=1;
		 }
            		 
		 else
		  vet->v[j].f+=1;
		  
		fscanf(arq,"%c",&cc);
	  }	
}

int ordenarVetor(int inicio,int fim ,stvet*vet){
	int anterior,pvT;
	stelem pv,temp;
	
    anterior = inicio;
    pv = vet->v[inicio];
    pvT = vet ->v[inicio].f;
    
    inicio++;
    while(inicio<=fim){
        while (inicio<=fim && pvT>=vet->v[inicio].f)
		 inicio++;
        while (fim>=0 && pvT<vet->v[fim].f) fim--;
        if(inicio<fim){
            temp = vet->v[inicio];
            vet->v[inicio] = vet->v[fim];
            vet->v[fim] = temp;
            inicio++;
            fim--;
        }
    }   
    vet->v[anterior] = vet->v[fim];
    vet->v[fim] = pv;
    
    return (fim);	
	
}


void quicksort(int a,int b,stvet*vet){
	int x ;
	if (a < b) {
        x = ordenarVetor(a,b,vet);
        
        quicksort(a ,x-1 , vet);
        
        quicksort(x + 1, b , vet);

    }	
}

void mostrar(stvet*vet){
	int i;
	for(i=0;i < vet->n;i++){
		printf("\n %c : %d \n",vet->v[i].c,vet->v[i].f);
	}
}

int main(void){
	FILE *arq;	
	stvet vet;
	

	arq = fopen("Texto.txt","w");
	if(!arq){
		printf("\n Erro no arquivo texto.txt \n");
		exit(0);
    }
	
	preencherVetor(arq,&vet);
	fclose(arq);
	mostrar(&vet);
	printf("\n------------\n");
	printf("\nOrganizado: \n");
	printf("\n------------\n");
	quicksort(0,vet.n-1,&vet);
	mostrar(&vet);
	free(vet.v);	
	
	
return(0);	
  
}
