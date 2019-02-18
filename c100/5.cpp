#include<stdio.h>
int main (void)
{
	int a,b,c,t,i;
	printf("输入三个值：");
	scanf("%d %d %d",&a,&b,&c);
	for (i=2;i>0;i--)
	{
		if(a>b)
		{
			t=a,a=b,b=t;
			if(b>c)
				t=b,b=c,c=t;
		}
	}
	printf("%d %d %d",a,b,c);
}
