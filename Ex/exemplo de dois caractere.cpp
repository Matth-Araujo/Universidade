#include <stdio.h>
main()
{
	char ch1,ch2;
	printf("Digite um caractere: ");
	scanf("%c",&ch1);
	printf("Digite outro caractere: ");
	scanf(" %c",&ch2);
	printf("O primeiro caractere foi '%c'e o segundo foi '%c'\n",ch1,ch2);
}
