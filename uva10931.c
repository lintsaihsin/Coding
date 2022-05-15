#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, b, cnt, k, i;
    int arr[1000000];
    while( ~ scanf(" %d", &a) && a != 0)
    {
        printf("The parity of ");
        cnt = k = 0;
        while(a >= 1)
        {
            b = a % 2;

            arr[k++] = b;
            if ( b == 1)
            {
                cnt++;
            }

            a = a/2; 
        }
        for ( i = k - 1; i >= 0 ; i--)
        {
            printf("%d", arr[i]);
        }
        printf(" is %d (mod 2).\n",cnt);
        
    }
    return 0;
}