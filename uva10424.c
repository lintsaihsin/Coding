#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char const *argv[])
{
    char chk[30];
    int i, j, t = 2;
    double ans;

    while(gets(chk))
    {
        int num = 0, cnt =0, b ;

        for(j = 0; j < strlen(chk); j++)
        {
            if(!isalpha(chk[j]))
                continue;
            if(isupper(chk[j]))
                chk[j] = tolower(chk[j]);

            num += chk[j]-'a'+1;
            
        }

            while(num >= 10)
        {
            int tmp = 0;

            while(num >= 1)
            {
                tmp += num%10;
                num /= 10;
            }

            num = tmp;
        }




        char chk1[30];
        gets(chk1);

        int num1 = 0;
        cnt = 0;

        for(j = 0; j < strlen(chk1); j++)
        {
            if(!isalpha(chk1[j]))
                continue;
            if(isupper(chk1[j]))
                chk1[j] = tolower(chk1[j]);
            num1 += chk1[j]-'a'+1;
            
        }


        while(num1 >= 10)
        {
            int tmp = 0;

            while(num1 >= 1)
            {
                tmp += num1%10;
                num1 /= 10;
            }

            num1 = tmp;
        }

            if (num>num1)
            {
                int tmp;
                tmp = num;
                num = num1;
                num1 = tmp;
            }
            
            printf("%.2lf %%\n",(double)num/num1*100);

        



    }
    return 0;
}