#include<stdio.h>
int main(void)
{
	int n,i,t,j;
	scanf("%d",&n);
	int a[n+1];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n-1-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
	for(i=0;i<n;i++)
		if(a[i]!=i)
			{
				printf("%d",i);
				break;
			}
}
