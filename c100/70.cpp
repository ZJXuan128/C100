#include<stdio.h>
double sum(int n)
{
	double s=0;
	int i;
	if(n%2==0)
		for(i=2;i<n+1;i+=2)
			s+=(1/(double)i);
	else
		for(i=1;i<n+1;i+=2)
			s+=(1/(double)i);
	return s;
}
int main(void)
{
	double s;
	int n;
	scanf("%d",&n);
	s=sum(n);
	printf("%lf",s);
}
