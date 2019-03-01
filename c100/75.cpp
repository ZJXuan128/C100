#include<stdio.h>
int f(char s[])
{
	int i;
	for(i=0;s[i+1]!=0;i++)
		if(s[i]!=s[i+1])
			return i+1;
	return -1;
}
int main(void)
{
	char s[5];
	int a;
	scanf("%s",s);
	a=f(s);
	printf("%d",a);
} 
