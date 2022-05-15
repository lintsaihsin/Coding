#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int t, i,flag=0,flag2=0;
    long long a, b;
    int chk[15];
    int chk2[15];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&a);
        if(flag == 0)
            flag=1;
        else
        {
            puts("");
        }
        for(i = 1; a*i < 1e11; i++)
        {
            int hold2=i;
            memset(chk2, 0, sizeof(chk2));
            flag2 = 0;
            while(hold2 >= 1)
            {
                int tmp2 = hold2 % 10;
                if(chk2[tmp2]==1)
                    {
                        flag2=1;
                        break;
                    }
                    chk2[tmp2]=1;
                    hold2 /=10;
            }

            if(flag2 == 1)
            {
                continue;
            }
            
            b = a*i;

            int len = 0;
            long long hold = b;

            while(hold >= 1)
            {
                len++;
                hold /= 10;
            }


            if(len > 10)
                break;

            int flag = 0;
            memset(chk, 0, sizeof(chk));

            hold = b;

            while(b >= 1)
            {
                int tmp = b%10;

                if(chk[tmp] == 1)
                {
                    flag = 1;
                    break;
                }

                chk[tmp] = 1;
                b /= 10;
            }

            if(flag == 1)
            {
                continue;
            }

            printf("%lld / %d = %lld\n", hold, i, a);
        }


    }
    return 0;
}