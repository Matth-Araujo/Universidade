#include <stdio.h>
main()
{
	int n;
	printf("Digite um numero inteiro:");
	scanf("%d",&n);
	printf(" Foi digitado o numero %d cujo caractere eh igual a '%c'\n",n,(char)n);
	printf("O caractere seguinte eh '%c' e tem o ASCII numero %d\n",(char)(n+1),n+1);
}
