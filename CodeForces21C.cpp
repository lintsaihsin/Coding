#include<bits/stdc++.h>
using namespace std;
static const int MAXN = 1e5+10;
#define LL long long

int main(int argc, char const *argv[])
{
  int n;
  LL arr[MAXN];
  while(cin >> n){
    memset(arr, 0, sizeof(arr));
    LL sum = 0;
    for(int i = 1; i <= n; i++){
      cin >> arr[i];
      arr[i] += arr[i-1];
    }
    LL ans = 0;
    LL tmp = 0;
    if(arr[n] % 3)
      cout << "0" << "\n";
    else{
      int t = arr[n] / 3;
      for(int i = 1 ; i <= n-1; i++){
        if(arr[i] == t*2)
          ans += tmp;
        if(arr[i] == t)
          tmp++;
        
      }
      cout << ans << "\n";
    }
    
  }
  return 0;
}
