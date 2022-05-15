#include<bits/stdc++.h>
using namespace std;

struct node
{
    int sum;
    int i;
    bool operator <(const node &rhs)const{
        return sum > rhs.sum;
    }
};

int main(int argc, char const *argv[])
{
    int k;
    while(cin >> k){
        int a[755], b[755];
        for(int i = 0; i < k ; i++){
            cin >> a[i];
        }
        sort(a, a+k);
        
        for(int i = 1; i < k; i++){
            for(int j = 0; j < k ; j++){
                cin >> b[j];
            }
            sort(b, b+k);
            priority_queue <node> pq;
            for(int j = 0; j < k ; j++){
                pq.push(node{(a[j] + b[0]), 0});
            }
            for(int j = 0; j < k ; j++){
                node tmp = pq.top();
                a[j] = tmp.sum;
                pq.pop();
                if(tmp.i+1 < k)
                    pq.push(node{(tmp.sum - b[tmp.i] + b[tmp.i + 1]), (tmp.i+1)});

            }
        }
        cout << a[0];
        for(int i = 1; i < k ; i++){
            cout << " " << a[i];
        }
        cout << endl;
    }
    return 0;
}