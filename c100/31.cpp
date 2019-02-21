#include<stdio.h>
int fact(int n);
int main(void)
{
	int s;
	printf("%d",s=fact(5));
}
int fact(int n)
{
	if(n==1)
		return 1;
	return fact(n-1)*n;
}
