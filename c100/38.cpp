#include<stdio.h>
int main(void)
{
	char s1[10],s2[10];
	int i=0,j=0;
	scanf("%s",s1);
	while(s1[i]!=0)
	{
		if(s1[i]!=44)
		{
			s2[j]=s1[i];
			j++;
		}
		i++ ;
	}
	printf("%s",s2);
}
