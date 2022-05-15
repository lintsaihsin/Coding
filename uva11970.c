#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int  t, i, a, x, j;
    scanf("%d",&t);
    for(i = 1;i <= t; i++)
    {
        scanf("%d",&a);
        printf("Case %d:", i);
        for(j = (sqrt(a)-1);j > 0;j--)
        {
            x = a-j*j;
            if(x%j==0)printf(" %d", x);
        }
        puts("");
    }

    return 0;
}