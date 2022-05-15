#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[55] = {0};
    int n, m;
    cin >> n >> m;
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b]++;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i] << endl;
    }
    return 0;
}