#include<stdio.h>
int fact(int n);
int C(int n,int m);
int main(void)
{
	int n,w=0,i;
	printf("ÇëÊäÈëÂ¥Ìİ½×Êı£º");
	scanf("%d",&n);
	if(n%2==0)
		for(i=0;i<(int)(n/2+1);i++)
			w+=C((int)(n/2+i),(int)(n/2-i));
	else
		for (i=0;i<(int)((n+1)/2);i++)
			w+=C((int)((n+1)/2)+i,(int)((n-1)/2)-i);
	printf("%d",w);
} 
int fact(int n)
{
	if(n==1)
		return 1;
	return n*fact(n-1);
}
int C(int n,int m)
{
	
	int s;
	if(m==0 or n==m)
		return 1;
	else
		{
			s=(int)(fact(n)/(fact(n-m)*fact(m)));
			return s;
		}
}
