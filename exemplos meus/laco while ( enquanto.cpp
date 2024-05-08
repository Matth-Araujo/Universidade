#include <stdio.h>
main()
{
	int num,i;
	i=1;
	printf("Qual tabuada voce deseja ver:");
	scanf("%d",&num);
	while(i<=10)
	{
	 printf("%d * %2d = %2d\n",num,i,num*i);
	 i=i+1;
    }   
}
