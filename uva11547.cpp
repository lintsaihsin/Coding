#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while(n--)
    {
        int m;
        cin >> m;
        cout << abs((((m*63+7492)*5-498)/10)%10) << endl;
    }
    return 0;
}