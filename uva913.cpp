#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int a;
    while(cin >> a)
    {
        a /= 2;
        cout << (6 * a * a) + (12 * a) - 3 << endl;
    }
    return 0;
}