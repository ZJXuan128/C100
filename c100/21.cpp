#include<stdio.h>
int main (void)
{
	char s[30];
	int i,space=0,letter=0,digit=0,other=0;
	gets(s);
	for (i=0;s[i]!=NULL;i++)
	{
		if(s[i]==32)
			space+=1;
		else if((s[i]<91&&s[i]>64)||(s[i]>96&&s[i]<123))
			letter+=1;
		else if(s[i]>47&&s[i]<58)
			digit+=1;
		else
			other+=1;
	}
	printf("space:%d\tletter:%d\tdigit:%d\tother:%d",space,letter,digit,other);
}
