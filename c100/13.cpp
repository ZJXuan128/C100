#include <stdio.h>
int main(void)
{
	int a1=1,a2=1,i;
	for (i=0;i<10;i++)
	{
		printf("%d\t%d\n",a1,a2);
		a1=a1+a2;
		a2=a1+a2;
	}
} 
