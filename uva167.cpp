#include <bits/stdc++.h>
using namespace std;
int arr[10][10];
int q[10];
int maxx;

void dfs(int num)
{
  if(num == 8){
    int sum = 0;
    for(int i = 0; i < 8; i++){
      sum += arr[q[i]][i];
    }
    maxx = max(maxx, sum);
  }
  else{
    for(int i = 0; i < 8; i++){
      bool flag = true;
      for(int j = 0; j < num; j++){
        if((abs(j - num) == abs(q[j] - i)) || (q[j] == i)){
          flag = false;
          break;
        }
      }
      if(flag){
        q[num] = i;
        dfs(num+1);
      }
    }
  }
}
int main()
{
  int t;
  cin >> t;
  while(t--){
    memset(q, 0, sizeof(q));
    memset(arr, 0, sizeof(arr));
    maxx = 0;
    for(int i = 0; i < 8; i++){
      for(int j = 0; j < 8; j++){
        cin >> arr[i][j];
      }
    }
    for(int i = 0; i < 8; i++){
      q[0] = i;
      dfs(1);
    }
    printf("%5d\n", maxx);
  }
}