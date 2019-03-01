#include<stdio.h>
int main(void)
{
	int i,four,three,two;
	for(i=10;i<100;i++)
	{
		four=809*i;
    	three=9*i;
    	two=8*i;
    	if(int(four/1000)!=0 && int(three/100)!=0  && int(two/10)!=0)
        	{
        		printf("%d %d",i,four);
        		break;
			}
	} 
} 
