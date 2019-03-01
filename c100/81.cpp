#include<stdio.h>
int main(void)
{
	int a[4];
	int i,t;
	for(i=3;i>=0;i--)
	{
		scanf("%d",&t);
		a[i]=(t+5)%10;
	}
	for(i=0;i<4;i++)
		printf("%d",a[i]);
}

