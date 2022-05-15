#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int t, cnt;
    double num;
    while(~scanf("%d",&t))
    {
        printf("2^-%d = ", t);
        num = 1;
        cnt = 0;
        while(t--)
        {
            num = num/2;
            if(num < 1)
            {
                num = num*10;
                cnt++;
            }
        }
        printf("%.3lfe-%d\n",num,cnt );
    }
    return 0;
}