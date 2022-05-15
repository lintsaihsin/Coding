#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    long long  i, a, b;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&a);
        b = (sqrt(1+8*a)-1)/2;
        printf("%lld\n", b);
    }
    return 0;
}