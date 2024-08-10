#include <stdio.h>
main()
{
	int i,n,soma,produto;
	printf("Digite Um Numero: ");
	scanf("%d",&n);
	for(soma=0,i=produto=1;i<=n;i=i+1){
		soma=soma+i;
		produto=produto*i;
		
	}
    printf("Soma = %d\nProduto = %d\n",soma,produto);
}
