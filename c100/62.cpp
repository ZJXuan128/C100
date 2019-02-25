#include<stdio.h>
int main (void)
{
	int i,a[5],max=0,min=0,_max,_min;
	for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]>max)
				{
					max=a[i];
					_max=i;
				}
			if(a[i]<min)
				{
					min=a[i];
					_min=i;
				}
		}
	if(max!=a[0])
		{i=a[0];a[0]=a[_max];a[_max]=i;}
	if(min!=a[5])
		{i=a[5];a[5]=a[_min];a[_min]=i;}
	for(i=0;i<5;i++)
		printf("%d",a[i]);
}
