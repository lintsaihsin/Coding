#include <bits/stdc++.h>
using namespace std;

int parent[10000];
int find(int x);
void unionSet(int a, int b);
int main(int argc, char const *argv[])
{
    int t, num;
    int flag = 0;
    char str[10000];
    scanf("%d\n", &t);
    while(t--)
    {
        scanf("\n%d\n", &num);
        int r = 0, f = 0;
        for (int i = 1; i <= num; ++i) parent[i] = i;
        int a, b;
        while(gets(str) && str[0] != '\0')
        {
            if(str[0] == 'c')
            {
                sscanf(&str[1] ,"%d %d", &a, &b);
                unionSet( a, b);
            }
            else if (str[0] == 'q')
            {
                sscanf(&str[1] ,"%d %d", &a, &b);
                if(find(a) == find(b)) r++;
                else f++;
            }
        }
        cout << r << ',' << f << endl;    
        if(t) cout << endl;
    }   
    return 0;
}

void unionSet(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a != b)
    {
        if(parent[a] >= parent[b]) parent[a] = parent[b];
        else parent[b] = parent[a];
    }
}

int find(int x)
{
    if(x == parent[x]) return x;
    return parent[x] = find(parent[x]);
}