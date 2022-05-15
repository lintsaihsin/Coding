#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
int main()
{
    int i,a,n;
    scanf("%d",&n);

    
    printf("%d",factorial(n));
    return 0;
}

int factorial(int n){

    int i, a=1;
    for(i=1;i<=n;i++){
        a=a*i;

    }

    return a;
}
