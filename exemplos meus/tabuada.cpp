#include <stdio.h>
main(){
	int i,j;
	
	for(i=1 ;i<=5 ;i=i+1){
		for(j=1 ;j<=10 ;j=j+1){
			printf("%d x %d = %d\n",i,j,i*j);
		if (i!=5){
			printf("Pressione <ENTER> para continuar ...");
			getchar();
		}
			
		}
		printf("\n");
	}
}
