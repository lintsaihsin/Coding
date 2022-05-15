#include <bits/stdc++.h>
#include <stack>
using namespace std;

void BubbleSort(int arr[], int len) 
{
    int i, j, temp;
    for (i = 0; i < len - 1; ++i)          
        for (j = 0; j < len - 1 - i; ++j)  
            if (arr[j] > arr[j + 1])       
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main(int argc, char const *argv[])
{
    int num;
    int t;
    
    int tar;
    int ca = 0;
    while(scanf("%d %d", &num, &t) && num != 0 && t != 0)
    {
        int arr[10020];
        ca ++;
        printf("CASE# %d:\n", ca);
        for(int i = 0; i < num; i++)
        {
            scanf("%d" , &arr[i]);
        }

        BubbleSort(arr, num);

       
        int fin;
        int flag = 0;
        while(t--)
        {
             scanf("%d", &tar);
             flag = 0;
            for(int i = 0; i < num; i++)
            {
                if(arr[i] == tar)
                {
                    fin = i+1;
                    flag++;
                    break;
                }
                
            }

            if(flag == 0)
            {
                printf("%d not found\n", tar);
            }
            else 
            {
                printf("%d found at %d\n", tar, fin);
            }
        }
        
    }

    return 0;
}