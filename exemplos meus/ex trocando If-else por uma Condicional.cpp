#include <stdio.h>
main()
{
	float salario;
	printf("Qual o salario: ");
	scanf("%f",&salario);
	salario=salario>1000 ? salario*1.05 : salario*1.07;
	printf("Novo salario: %0.2f\n",salario); 
}
