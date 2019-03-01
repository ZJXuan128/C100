#include<stdio.h>
int main(void)
{
	int i,j,s,t,m;
	for(i=0;i<10000;i+=4)
	{
		s=0,m=i;
		for(j=0;j<5;j++)
		{
			t=i/4*5+1;
			i=t;
			if(t%4==0)
				s+=1;
			else
				break;
		}
		i=m;
		if(s==4)
		{
			printf("%d",t);
			break;
		}
	}
}
