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
			printf("����");
        	break;
		}
    	if(a==1)
       	{
       		printf("��");
        	break;	
	   }
	}
}
