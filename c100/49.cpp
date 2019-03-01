#include<stdio.h>
#include<string.h>
int match(char a[])
{
	char temp,s[100];
	int flag=0,top=0,i;
	for(i=0;i<strlen(s);i++)
		{
			if(a[i]=='[')
			{ 
            s[++top]=a[i];
            continue;
        	}
        if(a[i]==']')
		{ 
            temp = s[top];
            if(temp=='[')
			{
                flag = 1;
                top--;
                continue;
            }
			else
			{
                flag = 0;
                break;
            }
        }

        if(a[i]=='(')
		{
            s[++top]=a[i];
            continue;
        }
        if(a[i]==')')
		{
            temp = s[top];
            if(temp=='(')
			{
                flag = 1;
                top--;
                continue;
            }
			else
			{
                flag = 0;
                break;
            }
        }
    }
    if(flag&&(top==0))
        return 1;
    else
        return 0;

}
int main(void)
{
	char s[10];
	int i;
	scanf("%s",s);
	i=match(s);
	if(i)
		printf("match");
	else
		printf("not match");
	
}
