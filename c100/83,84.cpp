#include<stdio.h>
#include<string.h>
int main(void)
{
	char t,s[5];
	int n,i;
	FILE * fp;
	for(i=0;i<5;i++)
	{
		scanf("%c",&t);
		if(t=='#')
			break;
		s[i]=t;
	}
	strupr(s);
	n=strlen(s);
	fp=fopen("test.txt","w");
	fputs(s,fp);
	fclose(fp);
}
