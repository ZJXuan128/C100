#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main(void)
{
	int n;
	char s[6];
	scanf("%d",&n);
	if((int)n/10000!=0)
		printf("5");
	else if((int)n/1000!=0)
		printf("4");
	else if((int)n/100!=0) 
		printf("3");
	else if ((int)n/10!=0)
		printf("2");
	else 
		printf("1");
	itoa(n,s,10);
	strrev(s);
	n=atoi(s);
	printf("\n%d",n);
}
