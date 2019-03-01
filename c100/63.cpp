#include<stdio.h>
int main(void)
{
	int n,m,i,t,j;
	scanf("%d",&n);
	int a[n];
	scanf("%d",&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{
		t=a[m-i-1];
		for(j=m-i-1;j<m-i+(n-1);j++)
			a[j]=a[j+1];
		a[n-1]=t;
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
