#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[4]={'a','b','c','d'};
	char b[4];
	strcpy(b,a);
	printf("%s",b);
}
