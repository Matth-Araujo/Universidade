#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int* gerarVetor(int n){
	int *v,i;
		v= (int*) malloc(n*sizeof(int));
		 if(!v){
		 	printf("\n FALHA NA CONVERSAO!!! \n");
		 	exit(1);
		 }
		 srand(time(0));
		 
		 for(i=0;i<n;i++){
		 	v[i] = rand()%100;
		 }
		 
	return (v);	 
}


int trocarPosicao(int a, int b, int *v){
	int aa,pv,temp;
	pv = v[a];
	aa = a;
	a++;
		while(a<=b){
			while(a<=b && pv>=v[a]) a++;
			while(b>=0 && pv<v[b]) b--;
					
					if(a<b){
						temp = v[a];
						v[a] = v[b];
						v[b] = temp;
						a++;
						b--;
					}
			}	
		v[aa] = v[b];
		v[b] = pv;
		return (b);
}


void exibirVetor(int n,int *v){
	int i;
		printf("\n ------------------\n");
		printf("\n       VETOR       \n");
		printf("\n ------------------\n");
		for(i=0;i<n;i++){
			printf(" %d",v[i]);
		}
}

void quickSort(int *v, int a, int b) {
    int pv ;
	if (a < b) {
        pv = trocarPosicao(a,b,v);
        
        quickSort(v, a, pv - 1);
        //exibirVetor(pv-1,v);
        
        quickSort(v, pv + 1, b);
        //exibirVetor(pv+1,v);

    }
}

 int valorpivo(int *v){
 	return (v[0]);
 }



int main(void){
  	int n,*v,s,t;
	  
	  printf("Digite o tamanho do Vetor: "); scanf(" %d",&n);
	  
	  v = gerarVetor(n);
	  exibirVetor(n,v);
	  t = valorpivo(v);
	  
	  s = trocarPosicao(0,n-1,v);
	  printf("\n");
	  printf("\n Valor do pivo: %d",t);
	  
	  printf("\n");
	  
	  exibirVetor(n,v);
	  printf("\n");
	  printf("\nO pivo ficou no indice %d \n",s);
	  
	  quickSort(v, 0, n - 1);
	  exibirVetor(n,v);
	  
	free(v);
	return 0;
}
