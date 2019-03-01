#include<stdio.h>
#include<string.h> 
int min(int a,int b,int c)
{
	if(a<b&&a<c)
		return a;
	if(b<a&&b<c)
		return b;
	return c;
		
}
int main(void)
{
	char a[10],b[10];
	int i,j,al,bl,sub,del,ins;
	scanf("%s",a);
	scanf("%s",b);
	al=strlen(a);
	bl=strlen(b);
	int n[bl+1][al+1];
	for(i=0;i<bl;i++)
		n[i][0]=i;
	for(i=0;i<bl;i++)
		for(j=0;j<al;j++)
		{
			if(a[j]==b[i])
				sub=n[i][j];
			else
				sub=n[i][j]+1;
			del=n[i][j+1]+1;
			ins=n[i+1][j]+1;
			n[i+1][j+1]=min(sub,del,ins);
		}
	printf("%d",n[bl][al]);
}
