#include <stdio.h>
#include <stdlib.h>


int opera(int b , int c,int d){
	d=b+( c);
	b=d/10;
	return b;
}

main (){
	int a,b,*c,*d;
	c=&b;
	d=&a;
	b=10;
	a= opera(b,*c,*d);
	printf("valores de : a=%d,b=%d",a,b);
}
