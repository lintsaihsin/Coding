#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    while(~scanf("%d", &t))
    {
       
        int a,b;
        stack <int> st;
        queue <int> qu;
        priority_queue<int> pq;
        int stack = 1;
        int queue = 1;
        int pqueue = 1;
        for (int i = 0; i < t; i++)
        {
            cin >> a >> b;
            if(a == 1)
            {
                st.push(b);
                qu.push(b);
                pq.push(b);
            }
            else if(a == 2)
            {
                if(!st.empty()&& st.top()== b) st.pop();
                else stack = 0;
                
                if(!qu.empty()&& qu.front()== b) qu.pop();
                else queue = 0;

                if(!pq.empty()&& pq.top()== b) pq.pop();
                else pqueue = 0;
            }
        }

        
        
       
        if((stack && queue )||( stack && pqueue) || (queue && pqueue)) cout << "not sure" <<endl;
        else if(stack) cout << "stack" <<endl;
        else if(queue) cout << "queue" <<endl;
        else if(pqueue) cout << "priority queue" <<endl;
        else cout << "impossible" <<endl;
    }
    return 0;
}