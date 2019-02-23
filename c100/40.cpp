#include<stdio.h>
int main(void)
{
	int n,i,j,t=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
		{
		for(j=2;j<=n;j++)
			if(i%j==0)
				break;
		if(i==j)
			t+=1;
		}
	printf("%d",t);
} 
