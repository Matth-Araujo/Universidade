#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* defvetorA(int n){
	int *v,j;
	
		v=(int*) malloc(n*sizeof(int));
		if(!v){
			printf("\n Erro no malloc");
			exit(1);
		}
		 srand(time(0));
		 for(j=0;j<n;j++){
		 v[j]=rand()%100;
	    }
	     return (v);
		}
void exibirVetor(int n, int *v){
	int i;
	printf("\n Vetor \n");
		for(i=0;i<n;i++){
			printf(" %d",v[i]);
		}		
}
int* gerarB(int n,int *v){
	  int *b,j,temp,i;
	   b=(int*)malloc(n*sizeof(int));
	    if(!b){
	   	 printf("\n Erro no malloc");
			exit(1);
	   }
	   	for(i=0;i<n;i++){
	   		b[i]=v[i];
	   			j=i;
	   				while(j>0 && b[j-1]>b[j]){
	   					temp = b[j];
	   					b[j]=b[j-1];
	   					b[j-1]=temp;
	   					j--;
			   }	   	
	   }
	   return b;	
}
main(){
	int *v,n,*b;
	
	printf("Qual o tamanho do Vetor :");
	scanf(" %d",&n);
	
	v = defvetorA(n);
	exibirVetor(n,v);
	
	b=gerarB(n,v);
	exibirVetor(n,b);	
}
