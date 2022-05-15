#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    long long int t, a, b, c, cnt, ttl, ttl2, tmp, flag, flag2 =0, p, i;
    scanf("%lld", &t);
    while(t--)
    {
        if(flag2 == 1) puts("");
        scanf("%lld %lld", &a, &b);
        char arr[22];
        arr[a] = '\0';
        
        ttl = 1;
        ttl2 = 1;
        cnt = b;
        tmp = a;
        while(cnt--)
        {
            ttl = tmp*ttl;
            tmp--;
        }
        for (i = 1; i <= b; i++)
        {
            ttl2 = i*ttl2;
        }
        
        cnt = ttl /ttl2;

            for(i = 0;i <= (a-1); i++)
            {
                arr[i] = '0';
                
            }
            for(i = (a-b);i <= (a-1); i++)
            {
                arr[i] = '1';
                
            }
            puts(arr);
            flag2 = 1;

        p = 1;
        while(cnt != p){
            arr[a-1]++;
            for(i = a-1;i >= 0; i--)
            {

                if(arr[i] =='2')
                {
                    arr[i-1] ++;
                    arr[i] = '0';
                } 
            }
            flag = 0;
            for(i = a-1;i >= 0; i--)
            {
                if (arr[i] == '1')
                {
                    flag++;
                }

            }
            if(flag == b) 
            {
                puts(arr);
                cnt--;
            }

        }
        
    
    }
    return 0;
}