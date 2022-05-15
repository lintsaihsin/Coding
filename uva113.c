#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int  cnt;
    double a, b, tmp;
    while(~scanf("%lf%lf",&a,&b))
    {
        printf("%.0lf\n", pow(b,(1/a)));
    }

    return 0;
}