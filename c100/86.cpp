#include<stdio.h>
int main(void)
{
	FILE * fp;
	int i;
	char a[10],b[10];
	fp=fopen("A.txt","r");
	fgets(a,5,fp);
	fclose(fp);
	fp=fopen("B.txt","r");
	fgets(b,5,fp);
	fclose(fp);
	fp=fopen("C.txt","w");
	fputs(a,fp);
	fputs(b,fp);
	fclose(fp);
}
