#include <stdio.h>
#include<math.h>
int main(void)
{
	int i,j,t=0;
	for (i=101;i<200;i++)
	{
		for(j=2;j<(int)sqrt(i)+1;j++)
		{
			if(i%j==0)
			{
				t=1;
				break;
			}
		}
		if(t==0)
			printf("%d\t",i);
		else
			t=0;
	}
}
