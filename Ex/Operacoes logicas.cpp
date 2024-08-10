#include <stdio.h>
main()
{
	int x,y;
	printf("Digite um numero: ");
	scanf("%d",&x);
	printf("Digite outro numero: ");
	scanf("%d",&y);
	printf("O Resultado de %d == %d : %d\n",x,y,x==y);
	printf("O Resultado de %d > %d : %d\n",x,y,x>y);
	printf("O Resultado de %d >= %d : %d\n",x,y,x>=y);
	printf("O Resultado de %d < %d : %d\n",x,y,x<y);
	printf("O Resultado de %d <= %d : %d\n",x,y,x<=y);
	printf("O Resultado de %d != %d : %d\n",x,y,x!=y);
}
