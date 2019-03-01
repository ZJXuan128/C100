#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[9],b[5];
	int i;
	scanf("%s",a);
	for (i=0;i<4;i++)
		b[i]=a[i+3];
	i=atoi(b);
	printf("%d",i);
}
