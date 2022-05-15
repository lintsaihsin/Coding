#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int id[50000];
int chk[50000];

int main()
{
    int z, i, m, l, a,c,j,k;

    j = 0;

    while(~scanf("%d %d %d %d",&z,&i,&m,&l))
    {


        if(z == 0 && i == 0 && m == 0 && l == 0  )
        {
            break;
        }
        j++;
        c = 1;


        memset(chk,0,sizeof(chk));
        chk[l]=1;


        for(k=1; ; k++)
        {
            if ( c != 1)
            {
                a=(z*a+i)%m;

                chk[a]++;

                if(chk[a]==1)
                {
                    id[a]=k;
                }

                if(chk[a]==2)
                {
                    k=c;
                    
                    printf("Case %d: %d\n",j,k-id[a]);
                    break;
                }

            }

            if (c == 1)
            {
                id[l]=k;

                a = l;

            }
  
            c++;

        }
    }

    return 0;
}
