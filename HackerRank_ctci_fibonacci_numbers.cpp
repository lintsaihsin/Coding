#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fib(int n);
int main(int argc, char const *argv[])
{
    int a, i, z, o;
    scanf("%d",&a);
    printf("%d\n",fib(a));
    return 0;
}
int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}