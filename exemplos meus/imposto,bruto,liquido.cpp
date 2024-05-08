#include <stdio.h>
main()
{
	float salario,taxa;
	printf("Qual eh seu Salario:");
	scanf("%f",&salario);
	if(salario<1000)
	 taxa=0.05;
	else
	 if(salario<5000)
	  taxa=0.11;
	 else
	  taxa=0.35;
	printf("Salario: %0.2f ,Imposto: %0.2f ,Liquido: %0.2f\n",salario,salario*taxa,salario*(1-taxa));
}
