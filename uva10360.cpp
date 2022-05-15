#include<bits/stdc++.h>
using namespace std;
#define MAXN 1030
int mou[MAXN][MAXN] = {0};
int loc[MAXN][MAXN] = {0};
int mlo[MAXN][MAXN] = {0};
int main()
{
  int t;
  cin >> t;
  for(int cs = 1; cs <= t ; cs++){
    memset(mou, 0, sizeof(mou));
    memset(loc, 0, sizeof(loc));
    memset(mlo, 0, sizeof(mlo));
    int maxx = 0;
    int mi, mj;
    int n, m;
    cin >> n >> m;
    while(m--){
      int a, b;
      cin >> a >> b;
      cin >> mou[a][b];
    }
    for(int i = 1; i < MAXN; i++ ){
      for(int j = 1; j < MAXN; j++ ){
        loc[i][j] = loc[i-1][j] + loc[i][j-1] - loc[i-1][j-1] + mou[i][j];
        if((i-2*n-1)>=0 && (j-2*n-1)>=0) mlo[i][j] = loc[i][j] - loc[i-2*n-1][j] - loc[i][j-2*n-1] + loc[i-2*n-1][j-2*n-1];
        else if((i-2*n-1)>=0) mlo[i][j] = loc[i][j] - loc[i-2*n-1][j];
        else if((j-2*n-1)>=0) mlo[i][j] = loc[i][j] - loc[i][j-2*n-1];
        else mlo[i][j] = loc[i][j];
        // mlo[i][j] = loc[i][j] - loc[i-2*n-2][j] - loc[i][j-2*n-2] + loc[i-2*n-2][j-2*n-2];
        if(mlo[i][j] > maxx){
          maxx = mlo[i][j];
          mi = i;
          mj = j;
        }
      }
    }

    // for(int i = 0; i < MAXN; i++ ){
    //   for(int j = 0; j < MAXN; j++ ){
    //     cout << loc[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // cout << endl;
    // for(int i = 0; i < MAXN; i++ ){
    //   for(int j = 0; j < MAXN; j++ ){
    //     cout << mlo[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    cout << mi-n << " " << mj-n << " " << maxx << endl;
  }
  return 0;
}