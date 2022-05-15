#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int  t, sheet, page, blank, time, i, cnt, j;    
    while(scanf("%d", &t)&&t!=0)
    {
        printf("Printing order for %d pages:\n", t);        
        time = 1;
        if(t == 1)
        {

            printf("Sheet 1, front: Blank, 1\n");
        }
        if(t%4 == 0)
        {
            sheet = t/4;
            page = t;
            int arr[page];
            for(i = 1;i<=t;i++)
            {
                arr[i] = i;
            }
            for(cnt = 1;cnt<=sheet;cnt++)
            {

                printf("Sheet %d, front: ",cnt);
                printf("%d, ", arr[t-time+1]);
                printf("%d\n", arr[time]);
                printf("Sheet %d, back : ",cnt);
                printf("%d, ", arr[time+1]);
                printf("%d\n", arr[t-time]);
                time = time+2;

            }



        }
        if(t%4!=0 && t != 1)
        {
            sheet = t/4+1;
            blank = sheet*4-t;
            page = sheet*4;
            int arr[page];
            for(j = 1;j<=t;j++)
            {
                arr[j] = j;
            }
            for(j = (t+1);j <= page;j++)
            {
                arr[j] = 0;
            }
            for(cnt = 1;cnt<=sheet;cnt++)
            {

                printf("Sheet %d, front: ",cnt);
                if(arr[page-time+1] == 0)
                {
                    printf("Blank, ");
                }
                else printf("%d, ", arr[page-time+1]);
                if(arr[time] == 0)
                {
                    printf("Blank\n");
                }
                else printf("%d\n", arr[time]);
                printf("Sheet %d, back : ",cnt);
                if(arr[time+1] == 0)
                {
                    printf("Blank, ");
                }
                else printf("%d, ", arr[time+1]);
                if(arr[page-time] == 0)
                {
                    printf("Blank\n");
                }
                else printf("%d\n", arr[page-time]);
                time = time+2;

            }

        }
        

    }
    return 0;
}