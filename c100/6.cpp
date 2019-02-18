#include<stdio.h>
int main(void)
{
	int i,x=0,y=1,t;
	for(i=0;i<40;i++)
	{
		printf("%ld\t",y);
		t=y;
		y=x+y;
		x=t;
	}
} 
