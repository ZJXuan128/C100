#include<stdio.h>
int main(void)
{
	int i;
	scanf("%d",&i);
	if (i<10)
		printf("%.3f",0.1*i);
	else if(i<20)
		printf("%.3f",(i-10)*0.075+1);
	else if(i<40)
		printf("%.3f",(i-20)*0.05+1.75);
	else if(i<60)
		printf("%3.f",(i-40)*0.03+2.75);
	else if(i<100)
		printf("%.3f",(i-60)*0.015+3.35);
	else
		printf("%.3f",(i-100)*0.01+3.95);
}
