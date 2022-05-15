#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    while(cin >> n && n != 0)
    {
        while(1)
        {
            int m;
            cin >> m;
            if(m == 0) break;
            queue<int> in;
            queue<int> qu;
            in.push(m);
            for (int i = 1; i < n; ++i)
            {
                cin >> m;
                in.push(m);
                qu.push(i);
            }
            qu.push(n);
            stack<int> st;
            for (int i = 0; i < n; ++i)
            {
                if(!qu.empty() && !in.empty() && qu.front() == in.front())
                {
                    qu.pop();
                    in.pop();
                    while(!in.empty() && !st.empty() && in.front() == st.top())
                    {
                        in.pop();
                        st.pop();
                    }
                }
                else
                {
                    while(!in.empty() && !st.empty() && in.front() == st.top())
                    {
                        in.pop();
                        st.pop();
                    }
                    st.push(qu.front());
                    qu.pop();
                }
                
            }

            if(in.empty() && st.empty()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
        cout << endl;
    }
    return 0;
}