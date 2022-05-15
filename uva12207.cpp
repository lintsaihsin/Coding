#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int cs = 1;
    int p, c;
    while(cin >> p >> c && p && c){
        cout << "Case " << cs++ << ":" << endl;
        deque <int> dq;
        for(int i = 1; i <= min(p, c); i++){
            dq.push_back(i);
        }
        while(c--){
            char c;
            cin >> c;
            if(c == 'N'){
                cout << dq.front() << endl;
                dq.push_back(dq.front());
                dq.pop_front();
            }
            else{
                int n;
                cin >> n;
                for(int i = 0; i < dq.size(); i++){
                    if(dq[i] == n){
                        dq.erase(dq.begin() + i);
                        break;
                    }
                }
                dq.push_front(n);
            }
        }
    }
}