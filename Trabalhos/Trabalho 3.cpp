#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct sPto{
	float x,y,a;
}stPto;
	
	//estrutura de pontos em uma espaco bidimensional
typedef struct sVet{
	int n;
	stPto*v;
}stVet;
	
	
	//gera os pontos aleatorios e calcula o centro
stPto gerarpontos(stVet*vet){
    stPto centro = {0,0} ;
	int i;
	srand(time(0));
		for(i=0; i < vet->n ;i++){
			vet->v[i].x = rand()%100;
			vet->v[i].y = rand()%100;
			
			centro.x += vet->v[i].x;
			centro.y += vet->v[i].y;
		}
		centro.x/= vet->n;
        centro.y/= vet->n;
        centro.a = 0.0;

    return centro;
		
}
  // translada todos os pontos de forma que o ponto central se torne a origem
void gerarvet(stVet *vet, stPto center){
	int i;
		for(i=0; i < vet->n ; i++){
			vet->v[i].x -= center.x;
			vet->v[i].y -= center.y;
		}
}


	//cacula o angulo de cada ponto em relacao ao eixo x positivo
void calcang(stVet *vet){
    float hip,cos,arccos;
    int i;
    for(i=0 ; i < vet->n ; i++){
        hip = sqrt((vet->v[i].x * vet->v[i].x) + (vet->v[i].y * vet->v[i].y));    
        cos = vet->v[i].x/hip;
        arccos = acos(cos) * 180 / M_PI;
        
        if(vet->v[i].y < 0){
            arccos = 360 - arccos; 
        }
        vet->v[i].a = arccos;
    }
}






	
int poscentral(int ini, int fim, stVet*vet){
    int aa ; float centro ; stPto temp,centroP;
    
    aa = ini;
    centro = vet->v[ini].a;
    centroP= vet->v[ini];
    ini++;
    while(ini<=fim){
        while (ini<=fim && centro>=vet->v[ini].a) ini++;
        while (fim>=0 && centro<vet->v[fim].a) fim--;
        if(ini<fim){
            temp = vet->v[ini];
            vet->v[ini] = vet->v[fim];
            vet->v[fim] = temp;
            ini++;
            fim--;
        }
    }   
    vet->v[aa] = vet->v[fim];
    vet->v[fim] = centroP;
    
    return (fim);
}
	
void quickSort(int a, int b,stVet*vet) {
    int x ;
	if (a < b) {
        x = poscentral(a,b,vet);
        
        quickSort(a ,x-1 , vet);
        
        quickSort(x + 1, b , vet);

    }
}
	 
float calculoArea(stVet*vet){
	int i,j;
	float soma =  0.0f,area = 0.0f;
		for(i = 0; i < vet->n ; i++){
            j = (i+1)%(vet->n);
            soma = fabs(((vet->v[j].x - vet->v[i].x) * (vet->v[j].y + vet->v[i].y)))/2; 
            area += soma; 
        }
        return (area) ; 
        }  

	
  
void mostrar(stVet *vet, int exibirAngulo){
	for(int i=0 ; i < vet->n ; i++){
		printf("\n[x : %0.1f  ;  y: %.1f]",vet->v[i].x , vet->v[i].y);
		if (exibirAngulo) {
			printf("  ;  Angulo %.1f", vet->v[i].a);
		}
	}
	printf("\n----------------------\n");
}



int main(void){
	float s; int n;
	stVet vet;
	stPto center;
	float area;
		
	printf("Quantos pontos voce quer: ");
	scanf(" %d",&n);
	
	vet.v =(stPto*)malloc (n*sizeof(stPto));
	vet.n = n;
	center = gerarpontos(&vet);
	printf("Pontos Gerados:\n");
	mostrar(&vet,0);
	
	printf("Vetor Gerado:\n");
	gerarvet(&vet,center);
	mostrar(&vet,0);
	printf("Calculo do Angulo:\n");
	calcang(&vet);
	mostrar(&vet,1);
	
	area = calculoArea(&vet);
	quickSort(0,vet.n - 1,&vet);
    
	mostrar(&vet,1);
	
	printf("Tamanho da Area do Poligono : %0.2f",area);
	
	return (0);
}

