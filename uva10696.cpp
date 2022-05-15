#include <bits/stdc++.h>
using namespace std;

int cal(int a)
{
    if(a <= 100) return cal(cal(a+11));
    else if(a >= 101) return a-10;
}
int main(int argc, char const *argv[])
{
    int a;
    while(cin >> a && a != 0)
    {
        cout << "f91(" << a <<") = " << cal(a) << endl;
    }
    return 0;
}

