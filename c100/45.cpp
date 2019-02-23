#include<stdio.h>
int main(void)
{
	int i,j,a[3][3],b[3][3],c[3][3];
	for(i=0;i<3;i++)
		scanf("%d,%d,%d",&a[i][0],&a[i][1],&a[i][2]);
	printf("--------\n");
	for(i=0;i<3;i++)
		scanf("%d,%d,%d",&b[i][0],&b[i][1],&b[i][2]);
	printf("========\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			{
				c[i][j]=b[i][j]+a[i][j];
				printf("%d ",c[i][j]);
				if(j==2)
					printf("\n");
			}
}
