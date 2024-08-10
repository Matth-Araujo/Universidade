#include <stdio.h>
main()
{
	float raio,perimetro;
	double pi=3.1415927,area;
	printf("Informe o raio da circunferia em metros:");
	scanf("%f",&raio);
	area = pi*raio*raio;
	perimetro = 2 *pi*raio;
	printf("A area da circunferencia e igual a %f metros.\nO perimetro da circunferencia e igual a %f metros.",area,perimetro);
}
