#include <stdio.h>
main()
{
	float n;
	printf("Digite um numero Real :");
	scanf("%f",&n);
	printf(" Foi digitado o numero %0.2f que inteiro eh '%d'\n",n,(int)n);
	printf("O Inteiro seguinte eh '%d' e o Real seguinte eh %0.2f\n",(int)(n+1),n+1);
}
