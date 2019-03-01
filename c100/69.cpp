#include<stdio.h>
int main(void)
{
	int a[5],b[5],c[10],i;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		scanf("%d",&b[i]);
	for(i=0;i<10;i++)
		{
			if(i<5)
				c[i]=a[i];
			else
				c[i]=b[i-5];	
			printf("%d",c[i]);
		}
}
	
	
