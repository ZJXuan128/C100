#include<stdio.h>
long long fact(int n);
int main(void)
{
	int i;
	long long s=0;
	for (i=1;i<21;i++)
		s+=fact(i);
	printf("%lld",s);
}

long long fact(int n)
{
	if(n==1)
		return 1;
	return fact(n-1)*n;
}
