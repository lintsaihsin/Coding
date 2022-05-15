#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n;
    while(cin >> n && n){
        priority_queue<long long int, vector<long long int> , greater<long long int>> pq;
        while(n--){
            long long int t;
            cin >> t;
            pq.push(t); 
        }
        long long int tmp = 0;
        if(pq.size() == 1)  
            tmp = pq.top();
        while(pq.size() > 1){
            long long int a = pq.top();
            pq.pop();
            long long int b = pq.top();
            pq.pop();
            pq.push(a+b);
            tmp += (a+b);
        }
        cout << tmp << endl;
        pq.pop();
    }

    return 0;
}