#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--){
        long long int n, k;
        cin >> n >> k;
        set<long long int> s;
        long long int maxx = 0;
        long long int d = 1;
        while(n--)
            d *= 10;

        while(!s.count(k)){
            s.insert(k);
            maxx = max(maxx, k);
            k *= k;
            while(k >= d)
                k /= 10;
        }
        cout << maxx << endl;
    }
    return 0;
}