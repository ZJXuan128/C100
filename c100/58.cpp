#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[20],b[10],*p;
	int i,j;
	scanf("%s",a);
	scanf("%s",b);
	p=strstr(a,b);
	for(i=0;i<strlen(a);i++)
		if(&a[i]==p)
			{
				printf("%d",i+1);
				break;
			}
}
