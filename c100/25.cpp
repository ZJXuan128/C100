#include<stdio.h>
int main(void)
{
	int i,s=1,t;
	for(i=9;i>0;i--)
	{
		s+=1;
		s*=2;
	}
	printf("%d",s);
}
