#include<stdio.h>		//�����������㷨��2^2^3^1^1=0^3^0=3
int main(void)
{
	int i,t=0;
	int nums[5];
	for(i=0;i<5;i++)
		scanf("%d",&nums[i]);
	for(i=0;i<5;i++)
		 t^=nums[i];
	printf("%d",t);
} 
