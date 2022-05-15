#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[15][15] = {0};
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 10; ++j)
        {
            if(i == 1 || i == j || j == i+1) arr[i][j] = 1;
            else if(i == 2) arr[i][j] = j/2;
            else if(j > 4 && j - i == 2) arr[i][j] = 2;
            else if (j > 5 && j - i == 3) arr[i][j] = 3;
            else if(j == 7 && j >= i ) 
            {
                if(i == 3) arr[i][j] = 4;
            }
            else if(j == 8 && j >= i )
            {
                if(i == 4) arr[i][j] = 5;
                else if(i == 6) arr[i][j] = 2;
                else arr[i][j] = j-i;
            }
            else if(j == 9 && j >= i )
            {
                if(i == 3) arr[i][j] = 7;
                else if(i == 4) arr[i][j] = 6;
                else if(i == 5) arr[i][j] = 5;
                else arr[i][j] = j-i;
            }
            else if(j == 10)
            {
                if(i == 3) arr[i][j] = 8;
                else if(i == 4) arr[i][j] = 9;
                else if(i == 5) arr[i][j] = 7;
                else if(i == 6) arr[i][j] = 5;
                else arr[i][j] = j-i;
            }
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = 0;
        for (int i = 1; i <= b; ++i) ans += arr[i][a];
        cout << ans << endl;
    }
    return 0;
}
