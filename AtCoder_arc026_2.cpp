#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;
    long long int s;
    s = pow(n, 0.5);
    long long int tmp = 0;
    for (long long int i = 1; i <= s; ++i)
    {
        if(n % i == 0)
        {
            tmp = tmp + i + (n/i);
            if(i == (n/i)) tmp -= i;
        } 
    }
    if(tmp != 1)tmp -= n;
    else tmp = 0;
    if(tmp > n) cout << "Abundant" << endl;
    else if(tmp < n) cout << "Deficient"<< endl;
    else if(tmp == n)cout << "Perfect"<< endl;
    return 0;
}