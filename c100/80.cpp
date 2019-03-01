#include<stdio.h>
int main(void)
{
	int i,a[5],j,t=0;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
			if(a[i]==0)
				for(j=i;j<5;j++)
						a[j]=a[j+1];
			a[4]=0;
	for(i=0;i<5;i++)
		printf("%d",a[i]);
}
