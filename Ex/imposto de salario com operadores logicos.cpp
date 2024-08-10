#include <stdio.h>
main()
{
	float salario;   
	char est_civil;
	 printf("Quanto eh seu Salario:");
	 scanf("%f",&salario);
	 printf("Qual eh seu Estado Civil:");
	 scanf(" %c",&est_civil);
	  if(est_civil=='C'|| est_civil== 'c')
	   printf("Imposto a pagar: %0.2f",salario*0.09);
	  else
	  	if (est_civil=='S'||est_civil=='s')
	  	 printf("Imposto a pagar: %0.2f",salario*0.1);
	  	else
	  	 printf("Estado Civil Invalido!\n");
	
}
