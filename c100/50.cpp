#include<stdio.h>
int main(void)
{
	int i,j,a[10]={1,2,3,4},k;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=3+i;j>=0;j--)
			a[j+1]=a[j];
	}
	for(i=0;i<(4+k);i++)
		printf("%d",a[i]);
}
