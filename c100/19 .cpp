#include<stdio.h>
int main(void)
{
	unsigned int a;
	scanf("%u",&a);
	int count = 0;
        for(int i = 31;i >= 0;i--)
            count = (a>> i & 1) << (31-i) | count;/*��a�Ķ����Ƶ�iλ����count�ĵ�31-iλ*/
	printf("%d",count);
}
