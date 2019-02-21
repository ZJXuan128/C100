#include<stdio.h>
int main (void)
{
	int i,t;
	double s=0,a=1,b=2;
	for (i=0;i<20;i++)
	{
		s+=(b/a);
		t=b;
		b+=a;
		a=t; 
	}
	printf("%lf",s); 
}
