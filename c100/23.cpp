#include<stdio.h>
int main(void)
{
    int i, j, s;
    for( i=2; i<=1000; i++ )
    {
        s=0;  
        for( j=1; j<i; j++ )
        {
            if(i%j == 0)  
                s += j;
        }
        if(s == i) 
            printf("%d\t", i);
    }
}
