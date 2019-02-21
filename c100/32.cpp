#include<stdio.h>
char s[5];
void ref(int n);
int main (void)
{
	int n=5;
	ref(n);
	printf("%s",s);
}
void ref(int n)
{
	if(n<=1)
		s[5-n]=getchar();
	else
		{
			ref(n-1);
			s[5-n]=getchar();
		}
}
