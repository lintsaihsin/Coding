#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  long long int t;
  long long int p, q;
  cin >> t;
  while(t--)
  {
    long long int x, k;
    cin >> x >> k;
    if(k == 2)
    {
      cout << 1 << " " << 1 << endl;
      continue;
    }
    long long int a, b;
    a = ceil(x/(double)k);
    b = floor(x/(double)k);

    long long int tmp = 0;
    for (p = 0; (p * b) < x; ++p)
    {
      long long tmp;
      tmp = x;
      tmp -= p*b;
      if(tmp % a == 0)
      {
        cout << p << ' ' << tmp / a << endl;
          break;
      }
    }
  }
  return 0;
}