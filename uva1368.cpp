#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n, m;
    cin >> n >> m;
    string arr[55];
    for(int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    
    int ans = 0;
    char anss;
    for(int i = 0; i < m; i++)
    {
      int max = 0;
      map<char, int> mp;
      mp.clear();
      mp['A'] = 0;
      mp['T'] = 0;
      mp['C'] = 0;
      mp['G'] = 0;
      for(int j = 0; j < n; j++)
      {
        mp[arr[j][i]]++;
      }
      for(auto k:mp)
      {
        if(k.second > max)
        {
          max = k.second;
          anss = k.first;
        }
      }
      ans += (n - max);
      cout << anss;
    }
    cout << endl << ans << endl;
  }
  return 0;
}