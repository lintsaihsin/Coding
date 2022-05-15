#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    a *= b;
    a = min(a,c);
    cout << a;
    return 0;
}