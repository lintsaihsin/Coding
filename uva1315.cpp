#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int arr[32772] = {0};
    for (int i = 1; i <= 32767 ; ++i)
    {
        arr[i] = arr[i-1] + (i / 2 + i % 2) - 1;
    }
    while(t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }
    return 0;
}