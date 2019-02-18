#include<stdio.h>
#include<math.h>
int main(void)
{
	int a,sum=0,t,i,j;
	scanf("%d",&a);
	scanf("%d",&t);
	for (j=t;j>0;j--)
	{
		for (i=0;i<t;i++)
		{
			sum+=a*(pow(10,t-1-i)) ;
		}
		t-=1;
	}
	printf("%d",sum);
} 
