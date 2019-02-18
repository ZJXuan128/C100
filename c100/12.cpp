#include<stdio.h>
int main(void)
{
	float a;
	scanf("%f",&a);
	while((int)a)
	{
		a/=3;
    	if(a!=(int)a)
		{
			printf("²»ÊÇ");
        	break;
		}
    	if(a==1)
       	{
       		printf("ÊÇ");
        	break;	
	   }
	}
}
