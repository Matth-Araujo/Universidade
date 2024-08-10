#include <stdio.h>
main()
{
	float quilos = 1.0e3;
	float gramas = 1.0e6;
	float n_toneladas;
	printf("Quantas toneladas comprou :"); scanf("%f",&n_toneladas);
	printf("Numero de Quilos:%0.2f = %0.2e\n",n_toneladas*quilos,n_toneladas*quilos);
	printf("Numero de Gramas: %0.2f = %0.2e\n",n_toneladas*gramas,n_toneladas*gramas);
}
