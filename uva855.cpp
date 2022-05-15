#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int s, a, f;
        cin >> s >> a >> f;
        priority_queue <int,vector<int>,greater<int>> pqst;
        priority_queue <int,vector<int>,greater<int>> pqav;
        for (int j = 0; j < f; ++j)
        {
            int st, av;
            cin >> st >> av;    
            if(st <= s) pqst.push(st);
            if(av <= a) pqav.push(av);
        }
        cout << "(Street: ";
        if(f % 2 == 1) 
        {
            for (int i = 1; i <= f/2 ; ++i) pqst.pop();
            cout << pqst.top() ;
        }
        else
        {
            for (int i = 1; i < f/2; ++i) pqst.pop();   
            cout << pqst.top();
            
        }
        cout << ", Avenue: ";
        if(f % 2 == 1) 
        {
            for (int i = 1; i <= f/2 ; ++i) pqav.pop();
            cout << pqav.top();
        }
        else
        {
            for (int i = 1; i < f/2; ++i) pqav.pop();
            cout << pqav.top();
        
        }
        cout << ")" << endl;
    }
    return 0;
}