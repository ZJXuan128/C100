#include<stdio.h>
int main(void)
{
	char f;
	char s;
	printf("首字母：");
	scanf("%c",&f);
	while(1)
	{
		if(f=='M')
		{
			printf("星期一");
        	break;
		}
	    else if(f=='W')
	    {
	    	printf("星期三");
	        break;
		}
	    else if(f=='T')
	    {
	    	printf("下一个字母"); 
	    	scanf("%c",&s);
	        if(s=='u')
	        {
	            printf("星期二");
	            break;
			}
	        else if(s=='h')
	        {
	        	printf("星期四");
	            break;
			}    
		}
	    else if(f=='S')
	    {
	    	printf("下一个字母");
	    	scanf("%c",&s);
	        if(s=='a')
	        {
	        	printf("星期六");
	            break;
			}
	        else if(s=='u')
	        {
	        	printf("星期日");
	            break;
			}
	            
		}   
	}
}
