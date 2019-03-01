#include<stdio.h>
int main(void)
{
	char s[10],t;
	int i,j;
	scanf("%s",s);
	for (i=0;s[i+1]!=0;i++)
		for(j=0;s[j+1]!=0;j++)
			if(s[j]>s[j+1])
			{
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
	printf("%s",s);
}
