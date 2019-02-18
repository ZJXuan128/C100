#include<stdio.h>
int main(void)
{
	int i,g,s,b;
	for (i=100;i<1000;i++)
	{
		g=i%10;
    	s=(i-g)%100/10;
    	b=(int)(i/100);
    	if(i==b*b*b+s*s*s+g*g*g)
        	printf("%d\t",i);
	}
}
