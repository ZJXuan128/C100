#include<stdio.h>
#include<math.h>
int main(void)
{
	int i;
	for(i=-100;i<100000;i++)
	{
		if(sqrt(i+100)==(int)sqrt(i+100) && sqrt(i+268)==(int)sqrt(i+268))
		printf("%d\n",i);
	}
}
