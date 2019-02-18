#include<stdio.h>
int main (void)
{
	int i;
	float n=10,s=100,h=100;
	for(i=0;i<n;i++)
	{
		h/=2;
		s+=2*h;
	}
	printf("%f\t%f",s,h);
}
