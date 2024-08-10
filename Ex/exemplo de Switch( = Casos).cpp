#include <stdio.h>
main()
{
	char est_civil;
	printf("Qual eh seu Estado Civil:");
	scanf("%c",&est_civil);
	switch(est_civil)
	{
	    case'c':
	    case'C':printf("Casado\n"); break;
	    case's':
	    case'S':printf("Solteiro\n");break;
	    case'd':
	    case'D':printf("Divorciado\n");break;
	    case'v':
	    case'V':printf("Viuvo\n");break;
	    default:printf("Estado Civil Invalido\n");
    }
	
	
}
