#include<stdio.h>
int strlen(char s[])
{
	int i,t=0;
	for (i=0;s[i]!=0;i++)
		t+=1;
	return t;
}
int main(void)
{
	char s[20],* p;
	int a;
	scanf("%s",s);
	a=strlen(s);
	printf("%d",a);
}
