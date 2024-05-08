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

void quickSort(int *v, int a, int b) {
    if (a < b) {
        int pv = trocarPosicao(a,b,v);
        
        quickSort(v, a, pv - 1);
        quickSort(v, pv + 1, b);

    }
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
int main(void){
  	int n,*v,s;
	  
	  printf("Digite o tamanho do Vetor: "); scanf(" %d",&n);
	  
	  v = gerarVetor(n);
	  exibirVetor(n,v);
	  s = trocarPosicao(0,n-1,v);    // quicksort  trocar(0,s-1,v)trocar(s,b-1,v)
      exibirVetor(n,v);
	  printf("\nO pivo ficou no indice %d \n",s);
	  quickSort(v, 0, n - 1);
	  exibirVetor(n,v);
	free(v);
	return 0;
}
