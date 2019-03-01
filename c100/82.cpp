#include<stdio.h>
int main(void)
{
	char s[10],z[2];
	int i,j;
	gets(s);
	gets(z);
	for(i=0;s[i];i++)
		if(s[i]==z[0]&&s[i+1]==z[1])
			j++,i++;
	printf("%d",j-1);
	
}
