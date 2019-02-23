#include<stdio.h>
int main (void)
{
	int i,a[3][3],s=0;
	for(i=0;i<3;i++)
		{
			scanf("%d,%d,%d",&a[i][0],&a[i][1],&a[i][2]);
			s+=a[i][i];
		}
	printf("%d",s);
}
