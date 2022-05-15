#include<bits/stdc++.h>
using namespace std;
vector<int> v;


// void dd(int a){
//  for(int i = 1; i <= sqrt(a); i++){
//      if(a % i == 0){
//          cout << "in " << i << " " << a/i << endl;
//          v.push_back((a/i));
//          if(i != 1)v.push_back((i));
//      }
//  }
// }
int prime[1000005] = {0};
int cnt[1000005] = {0};
// vector<int> v;
int dd[35] = {0};
int main(int argc, char const *argv[])
{
    dd[0] = 1;
    for(int i = 1; i < 30; i++){
        dd[i] = dd[i-1] * 2;
    }
    for(int i = 2; i <= 1000000; i++){
        if(prime[i] == 0){
            v.push_back(i);
            for(int j = i*2; j <= 1000000; j += i){
                prime[j] = 1;
            }
        }
    }

    int a;
    cin >> a;
    int tmp = a;
    set<int> st;
    st.clear();
    int maxx = 0;
    while(a != 1){
        for(auto i : v){
            if(a % i == 0){
                st.insert(i);
                cnt[i]++;
                maxx = max(maxx, cnt[i]);
                a /= i;
                break;
            }
        }
    }
    int ans = 0;
    ans = maxx;
    int ans2 = 1;
    set <int> st2;
    st2.clear();
    for(auto i : st){
        st2.insert(cnt[i]);
        // cout << i << " ";
        ans2 *= i;
    }
    cout << ans2 << " ";
    // cout << ans << " " << st2.size() << endl;
    for(int i = 1; i < 30; i++){ 
        if(dd[i] >= ans){
            if(dd[i] == ans && st2.size() == 1) ans = i;
            else ans = i +1;
            break;
        }
    }
    if(tmp == ans2) cout << "0" << endl;
    else cout << ans << endl;
    return 0;
} 