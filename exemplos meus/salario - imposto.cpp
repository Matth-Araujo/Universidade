#include <stdio.h>
main()
{
	float salario;
	printf("Qual eh seu salario:");
	scanf("%f",&salario);
	if ( salario<=0)
	 printf("Salario:Valor invalido");
	 else
	  if(salario<=1000)
	   printf("Salario : R$%0.2f\n",salario*0.05);
	  else
       printf("Salario : R$%0.2f\n",salario*0.10);	 
}
