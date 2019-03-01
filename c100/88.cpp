#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10],b[10];
	int i,j,al,bl,max,p;
	scanf("%s",a);
	scanf("%s",b);
	al=strlen(a);
	bl=strlen(b);
	int r[al+1][bl+1]={0};
	max=0,p=0;
	for(i=0;i<al;i++)
		for(j=0;j<bl;j++)
			{
				if(a[i]==b[j])
					r[i+1][j+1]=r[i][j]+1;
				if(r[i+1][j+1]>max)
					{
						max=r[i+1][j+1];
						p=i+1;
					}
			}
	for(i=1;i<al+1;i++)
		{
			for(j=0;j<bl+1;j++)
				printf("%d\t",r[i][j]);
			printf("\n");
		}
	printf("%\n");
	for(i=p-max;i<p;i++)
		printf("%c",a[i]);
}
