#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d,cnt ;
    while(~scanf("%d %d",&a,&b))
    {
        cnt = 0;
        cnt += a;
        c = 1;
        while(c != 0){
            c = a/b;
            d = a%b;
            a = c+d;
            cnt = cnt+c;
        }
        printf("%d\n", cnt);
        
    }
    return 0;
}