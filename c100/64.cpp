#include<stdio.h>//Լɪ�� 
int main(void)		//n��Լɪ�򻷵Ľ��(ans + k)%n(nΪ��ǰ���е�������)���� k= m%n ����n-1�׵Ľ��Ϊans��     ��֤(ans + m % n)%n = ��ans + m��% n 
{					//�ɵͽ׽���Ƴ��߽׽�� 
	int n, s = 0,m=3,i; 
    scanf("%d", &n); 
    for (i = 2; i <= n; ++i) 
        s = (s+m)%i; 
    printf("%d\n", s+1);
}
