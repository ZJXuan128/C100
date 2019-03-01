#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[5],b[5],c[10];
	int i;
	scanf("%s",a);
	scanf("%s",b);
	strcpy(c,a);
	i=strlen(a);
	strcpy(&c[i],b);
	printf("%s",c);
}
