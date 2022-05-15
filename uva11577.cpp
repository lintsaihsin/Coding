#include<bits/stdc++.h>
using namespace std;
int ans[30];
int main()
{
  int n;
  scanf("%d\n", &n);
  while(n--){
    string str;
    getline(cin,str);
    memset(ans, 0, sizeof(ans));
    for(int i = 0; i < str.size(); i++){
      if(isalpha(str[i])){
        char c;
        c = toupper(str[i]);
        ans[c -'A']++;
      }
    }
    int maxx = 0;
    for(int i = 0; i < 26; i++){
      maxx = max(maxx, ans[i]);
    }
    for(int i = 0; i < 26; i++){
      if(ans[i] == maxx) cout << (char)(i + 'a');
    }
    cout << endl;
  }
  return 0;
}