#include<stdio.h>
int main(void)
{
	char f;
	char s;
	printf("����ĸ��");
	scanf("%c",&f);
	while(1)
	{
		if(f=='M')
		{
			printf("����һ");
        	break;
		}
	    else if(f=='W')
	    {
	    	printf("������");
	        break;
		}
	    else if(f=='T')
	    {
	    	printf("��һ����ĸ"); 
	    	scanf("%c",&s);
	        if(s=='u')
	        {
	            printf("���ڶ�");
	            break;
			}
	        else if(s=='h')
	        {
	        	printf("������");
	            break;
			}    
		}
	    else if(f=='S')
	    {
	    	printf("��һ����ĸ");
	    	scanf("%c",&s);
	        if(s=='a')
	        {
	        	printf("������");
	            break;
			}
	        else if(s=='u')
	        {
	        	printf("������");
	            break;
			}
	            
		}   
	}
}
