#include<stdio.h>
int main(void)
{
	int i,j,a[10][10];
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j||j==0)
				a[i][j]=1;
			else if(i>j)
				a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
			if(i>=j)
				printf("%d\t",a[i][j]);
			printf("\n");
	}
}
