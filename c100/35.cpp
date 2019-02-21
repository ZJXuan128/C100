#include<stdio.h>
#include<cstdlib>
#include<string.h>
int main (void)
{
	int n,m;
	char s[10];
	scanf("%d",&n);
	itoa(n,s,10);
	strrev(s);
	m=atoi(s);
	if(m==n)
		printf("回文");
	else
		printf("不是回文");
}
