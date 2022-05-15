#include<bits/stdc++.h>
using namespace std;

int cnt(int num)
{
  string s;
  s = to_string(num);
  for(int i = 0; i < s.size(); i++)
  {
    int n;
    n = s[i] - '0';
    num += n;
  }
  return num;
}
int ans[100050] = {0};
int main()
{
  for ( int i = 0; i < 100005; i++ )
  {
    int sol;
    sol = cnt(i);
    if(ans[sol] == 0)
    {
      ans[sol] = i;
    }
  }
  int t;
  cin >> t;
  while(t--)
  {
    string str;
    cin >> str;
    int num;
    num = stoi(str);
    cout << ans[num] << endl;
  }
  return 0;
}