#include<stdio.h>
int main (void)
{
	unsigned int a;
	int w,t=0;
	scanf("%u",&a);
	while(a!=0)
	{
		w=a&1;
		if (w==1)
			t+=1;
		a=a>>1;
	}
	printf("%d",t);
}
