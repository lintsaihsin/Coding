#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int arr[15] = {0};
    int a;
    cin >> a;
    for(int i = 1; i <= a; i++){
      string st;
      st = to_string(i);
      for(int j = 0; j < st.size(); j++){
        arr[st[j] - '0'] ++;
      }
    }
    cout << arr[0];
    for(int i = 1; i < 10; i++){
      cout << " " << arr[i];
    }
    cout << endl;
  }
}