#include<stdio.h>
int main(void)
{
	int t=0,f=0,y,m,d,i;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
	printf("输入年份：");
	scanf("%d",&y);
	if(y%4==0 && y%100!=0)
		t=1;
	if(y%400==0)
		t=1;
	printf("输入月份："); 
	scanf("%d",&m);
	printf("输入日期：");
	scanf("%d",&d);
	if(t==1)
		a[1]=29;
	for (i=0;i<m-1;i++)
		f+=a[i];
	printf("%d",f+d);
}
