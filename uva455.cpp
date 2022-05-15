#include<bits/stdc++.h>
using namespace std;

int main()
{
  int cs;
  cin >> cs;
  while(cs--){
    string str;
    cin >> str;
    int ans = 1000;
    for(int i = 1; i <= str.size(); i++){
      if(str.size() % (i) != 0) continue;
      string tmp = str;
      string od, nw;
      int cnt = 0;
      od = tmp.substr(0, i);
      tmp = tmp.substr(i);
      int t = 0;
      for(int j = 1; j < (str.size()/i); j ++){ 
        nw = tmp.substr(0, i);
        tmp = tmp.substr(i);
        // cout << i << " " << j << " " << od << " " << nw << endl;
        if(nw != od){
          t++;
          break;
        }
        od = nw;
      }
      if(t == 0)
        ans = min(ans, i);
    }
    cout << ans << endl;
    if(cs != 0) cout << endl;
  }
  return 0;
}