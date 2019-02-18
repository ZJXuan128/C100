#include<stdio.h>
int main(void)
{
	unsigned int a;
	scanf("%u",&a);
	int count = 0;
        for(int i = 31;i >= 0;i--)
            count = (a>> i & 1) << (31-i) | count;/*把a的二进制第i位放在count的第31-i位*/
	printf("%d",count);
}
