#include<stdio.h>
int main(void)
{
	int a,i;
	scanf("%d",&a);
	printf("%d=",a);
	while(a>1)
	{
		for (i=2;i<a+1;i++)
		{
			if (a%i==0)
			{
				a=(int)a/i;
				printf("%d*",i);
				break;
			}
		}
	}
	printf("1");
}
