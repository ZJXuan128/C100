#include<stdio.h>
int main(void)
{
	int a[10],i,j,t=0;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	int cnt = sizeof(a) / sizeof(a[0]);
	for(i=0;i<cnt;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(a[j]==a[i])
			{
				printf("true");
				t=1;
				break;
			}
		}
		if(t==1)
			break;
	}
	if(t==0)
		printf("flase");
}
