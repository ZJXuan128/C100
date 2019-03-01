#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int i,a[7],j;
	srand(time(NULL));
	for(i=0;i<7;i++)
		{
			a[i]=rand()%10;
			printf("%d\t",a[i]);
			for(j=0;j<a[i];j++)
				printf("*");
			printf("\n");
		}
}
