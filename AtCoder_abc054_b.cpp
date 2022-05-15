#include <iostream>
using namespace std;
int tmp;
int n,m;
char a[55][55];
char b[55][55];
bool s;

bool find(int x, int y)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(a[x+i][y+j] != b[i][j])
                return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    cin >> n >>m;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> b[i][j];
        }
    }
    s = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            tmp = 0;
            
            if(a[i][j] == b[0][0] && i+m <= n && j+m <= n) 
            {
                s = find(i,j);
                if (s)
                {
                    cout << "Yes";
                    break;
                }
            }
        }
        if(s == 1) break;
    }
    if(s == 0) cout << "No";
    return 0;
}