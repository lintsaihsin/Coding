#include<bits/stdc++.h>
using namespace std;
int arr[1000000] = {0};
int main()
{
  int prime[80000] = {0};
  arr[0] = 1;
  arr[1] = 1;
  int index = 0;
  for(int i = 2; i < 1000000; i++)
  {
    if(arr[i] == 0)
    {
      prime[index] = i;
      index++;
      for(int j = i + i; j < 1000000; j += i)
      {
        arr[j] = 1;
      }
    }
  }
  long long int n;
  while(cin >> n)
  {
    if(n < 0) break;
    for(int i = 0; i < index; i++)
    {
      if(n % prime[i] == 0)
      {
        cout << "    " << prime[i] << endl;
        n /= prime[i];
        while(n % prime[i] == 0)
        {
          cout << "    " << prime[i] << endl;
          n /= prime[i];
        }
        if(n == 1) break;
      }
      else continue;
    }
    if(n != 1) cout << "    " << n << endl;
    cout << endl;
  }
  return 0;
}