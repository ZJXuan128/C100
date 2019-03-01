#include<stdio.h>//约瑟夫环 
int main(void)		//n阶约瑟夫环的结果(ans + k)%n(n为当前序列的总人数)，而 k= m%n （设n-1阶的结果为ans）     可证(ans + m % n)%n = （ans + m）% n 
{					//由低阶结果推出高阶结果 
	int n, s = 0,m=3,i; 
    scanf("%d", &n); 
    for (i = 2; i <= n; ++i) 
        s = (s+m)%i; 
    printf("%d\n", s+1);
}
