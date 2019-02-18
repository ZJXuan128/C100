#include<stdio.h>
#include<time.h>
int main(void)
{
	time_t timer = time(NULL);
	printf("ctime is %s\n", ctime(&timer)); 
}
