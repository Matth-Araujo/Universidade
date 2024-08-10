#include <stdio.h>
main()
{
	int x,y,tr;
	printf("Digite um numero:");
	scanf("%d",&x);
	printf("Digite outro numero:");
	scanf("%d",&y);
	 if(x>y)
	 {
	 	tr=x;
	 	x=y;
	 	y=tr;
	 }
	printf("%d , %d\n",x,y);
}
