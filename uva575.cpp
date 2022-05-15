#include<bits/stdc++.h>
using namespace std;
int pw[32];
int main()
{
  pw[0] = 0;
  for(int i = 1; i <= 31; i++){
    pw[i] = (pw[i-1] + 1) * 2 - 1;
  }
  string str;
  while(cin >> str && str != "0"){
    int ans = 0;
    for(int i = 0; i < str.size(); i++){
      ans += (str[i] - '0') * (pw[str.size() - i]);
    }
    cout << ans << endl;
  }
  return 0;
}