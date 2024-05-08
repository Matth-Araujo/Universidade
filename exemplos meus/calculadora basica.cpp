#include <stdio.h>
main()
{
	int n1,n2;
	char sinal;
	printf("Calculadora Basica\n");
	printf("Digite o Primeiro Numero:");
	scanf("%d",&n1);
	printf("Digite o Segundo Numero:");
	scanf("%d",&n2);
	printf("Qual Operacao quer utilizar?");
	scanf(" %c",&sinal);
 	 switch(sinal)
	  {
	  	case 'x':
	  	case 'X':
	  	case '*': printf("%d %c %d eh igual a %d",n1,sinal,n2,n1*n2);break;
	  	case '+': printf("%d %c %d eh igual a %d",n1,sinal,n2,n1+n2);break;
	  	case '-': printf("%d %c %d eh igual a %d",n1,sinal,n2,n1-n2);break;
	  	case '\\':
	  	case'/': printf("%d %c %d eh igual a %d",n1,sinal,n2,n1/n2);break;
	  	default:printf("Operador invalido [ ERRO ]\n" ); 
			
	  }
}
