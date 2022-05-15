#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    stack<int> st;
    while(!st.empty()) st.pop();
    while(cin >> str)
    {
         
        if(str == "+")
        {
            int a;
            a = st.top();
            st.pop();
            a += st.top();
            st.pop();
            st.push(a);
        }
        else if( str == "-")
        {
            int a;
            a = st.top();
            st.pop();
            a = -1* a + st.top();
            st.pop();
            st.push(a);
        }
        else if( str == "*")
        {
            int a;
            a = st.top();
            st.pop();
            a *= st.top();
            st.pop();
            st.push(a);
        }
        else 
        {
            int cnt = 1;
            int ans = 0;
            for (int i = str.size() - 1; i >= 0 ; i--)
            {
                ans += (str[i] - '0') * cnt;
                cnt *= 10;
            }
            st.push(ans);
        }
    }
    cout << st.top() << endl;
    return 0;
}