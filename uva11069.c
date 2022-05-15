#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a, i, arr[77];

    arr [1] = 1;
    arr [2] = 2;
    arr [3] = 2;
    for( i = 4; i < 77; i++)
    {
        arr[i] = arr[i-2] + arr[i-3];
    }
    while(~scanf("%d",&a))
    {
        printf("%d\n", arr[a] );
    }
    return 0;
}
