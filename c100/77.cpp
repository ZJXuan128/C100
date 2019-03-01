#include<stdio.h>
int main(void)
{
	int s =0,total = 0,i;
	for (i=0;i<9;i++)
	{
		if(i == 1 )
			total = 4;
		else if(i ==2)
			total = total*7;
		else
			total *= 8;	
		printf("0~7组成%d位奇数，有：%d个\n",i,total);
		s+=total;
	}	
	printf("总计为：%d\n",s);
}
