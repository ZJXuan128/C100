#include<stdio.h>
#define INT_MAX 2147483647
#define INT_MIN (-INT_MAX - 1)
int reverse(int a)
{
	int b,res=0;
	while(a!=0)
	{
		b=a%10;
		a/=10;
		if(res>INT_MAX/10||(res==INT_MAX/10 &&b>7))//Òç³ö¹éÁã 
			return 0;
		if (res<INT_MIN/10||(res==INT_MIN/10 &&b<-8))
			return 0;
		res=res*10+b;
	}
	return res;
}
int main(void)
{
	int a,t;
	scanf("%d",&a);
	t=reverse(a);
	printf("%d",t);
} 
