#include<stdio.h>
int main(void)
{
	int a[4]={1,2,3,4};
	int i,j,k;
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
			{
				if(a[i]!=a[j])
					for (k=0;k<4;k++)
					{
						if(a[k]!=a[i]&&a[k]!=a[j])
						printf("%d\n",a[i]*100+a[j]*10+a[k]);
					}
			}
	}
}
