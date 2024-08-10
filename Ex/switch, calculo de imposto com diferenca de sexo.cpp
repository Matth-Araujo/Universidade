#include <stdio.h>
main()
{
	char sexo;
	float salario,imposto=0;
	printf("Qual eh sei sexo [F/M]:");
	scanf("%c",&sexo);
	printf("Informe o seu salario para o calculo de imposto:");
	scanf("%f",&salario);
	 switch(sexo)
	 {
	 	case'm':
	 	case'M':imposto=0.15;break;
	 	case'f':
	 	case'F':imposto=0.10;break;
	 }
	 printf("O imposto a ser pago eh: %0.2f",salario*imposto);
}
