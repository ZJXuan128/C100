#include<stdio.h>
int main(void)
{
	int a;
	while(1)
	{
		scanf("%d",&a);
		printf("%d\n",a*a);
		if(a*a<50)
			break;
	}
} 
