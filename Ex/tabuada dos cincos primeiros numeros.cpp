#include <stdio.h>
main()
{
  int i,c;
  i=1;
  while (i<=5)
  {
    c=1;
    while(c<=10)
    {
    	printf("%2d * %2d = %2d\n",i,c,i*c);
    	c=c+1;
	}
    i=i+1;
    printf("\n");
  }
  	
} 
