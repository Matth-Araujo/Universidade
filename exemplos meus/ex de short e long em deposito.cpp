#include <stdio.h>
main()
{
	short int idade;
	long int conta;
	int montante;
	printf("Informe sua idade:");
	scanf("%hd",&idade);
	printf("Digite o montante a depositar:");
	scanf("%d",&montante);
	printf("Qual o numero da conta:");
	scanf("%ld",&conta);
	printf("Uma pessoa de %hd anos depositou R$%d na conta %ld\n",idade,montante,conta);
}
