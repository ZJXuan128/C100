#include<stdio.h>
int main(void)
{
	int a,b,c;
	char s[3]={'x','y','z'};
	for (a=0;a<3;a++)
		for(b=0;b<3;b++)
			if(a!=b)
				for(c=0;c<3;c++)
					if(c!=a and c!=b)
                    	if(s[a]!='x'and s[c]!='x'and s[c]!='z')
                        	printf("aVS%c\tbVS%c\tcVS%c",s[a],s[b],s[c]);
}
