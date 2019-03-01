#include<stdio.h>
int main(void)
{
	int i,j,a[5],b[5],c[5],t=0;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
		{
			scanf("%d",&b[i]);
			for(j=0;j<5;j++)
				if(a[i]==b[j])
					{
						c[t]=a[i];
						printf("%d",c[t]);
						t++;
					}
		}
}
