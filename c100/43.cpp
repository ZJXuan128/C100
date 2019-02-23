#include<stdio.h>
int main(void)
{
	int i=4,t,a[10]={0,9,22,47,54};
	scanf("%d",&t);
	while(i>=0&&t<a[i])
		{
			a[i+1]=a[i];
			i--;
		}
	a[i+1]=t;
	for(i=0;i<6;i++)
		printf("%d\t",a[i]);
}
