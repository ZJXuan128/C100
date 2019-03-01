#include<stdio.h>
int main(void)
{
	int i,j,nums[5],target;
	for(i=0;i<5;i++)
		scanf("%d",&nums[i]);
	scanf("%d",&target);
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if(nums[j]+nums[i]==target)
				printf("%d %d\n",nums[i],nums[j]);
}
