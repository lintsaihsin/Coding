#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int ca;
    cin >> ca;
    for (int i = 1; i <= ca; ++i)
    {
        priority_queue <int> pq;
        for (int i = 0; i < 4; ++i)
        {
            int a;
            cin >> a;
            pq.push(a);
        }
        int n, m, s, t;
        n = pq.top();
        pq.pop();
        m = pq.top();
        pq.pop();
        s = pq.top();
        pq.pop();
        t = pq.top();
        pq.pop();
        if(n == t) cout << "square" << endl;
        else if(n == m && s == t ) cout << "rectangle" << endl;
        else if(n < ( m + s + t ) )  cout << "quadrangle" << endl;
        else cout << "banana" << endl;
    }
    
    return 0;
}