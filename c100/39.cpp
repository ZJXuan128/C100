#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,j;
	for (i=2;i<100;i++)
	{
		for(j=1;j<=(int)sqrt(i)+2;j++)
			{
				if(i!=2 && i%j==0&&j!=1)
					break;
				if(j==(int)sqrt(i))
					printf("%d\n",i);
			}
	}
}
