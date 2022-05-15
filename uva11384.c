#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    long long a;
    int cnt,i;
    while(~scanf("%lld",&a))
    {
        for (i = 0; ; i++)
        {
            if(pow(2,i)<= a && a<pow(2,(i+1)))
            {
                printf("%d\n", i+1);
                break;
            } 
        }
    }
    return 0;
}