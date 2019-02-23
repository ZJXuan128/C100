#include<stdio.h>
int main (void)
{
	int a[10],i,j,t;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=1;i<(sizeof(a)/sizeof(int));i++)
		for(j=0;j<(sizeof(a)/sizeof(int)-i);j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[1+j];
				a[j+1]=t;
			}
		}
	for(i=0;i<(sizeof(a)/sizeof(int));i++)
		printf("%d\t",a[i]);
} 
