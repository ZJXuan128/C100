#include<stdio.h>
int main(void)
{
	int i,j,k,h=4;
	for(i=0;i<h;i++)
	{
		for(j=0;j<h-i-1;j++)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("*");
		printf("\n");
	}
	for(i=0,h--;i<h;i++)
	{
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=2*(h-i)-1;k>0;k--)
			printf("*");
		printf("\n");
	}
	
}
