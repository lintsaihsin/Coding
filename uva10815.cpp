#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    priority_queue<string> pq;
    
            set<string> sset;
    while(!pq.empty()) pq.pop();
    while(cin >> str)
    {
        int cnt[100] = {0};
        int tmp[100] = {0};
        int flag = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            if(isalpha(str[i]))
            {
                if(isupper(str[i])) str[i] = tolower(str[i]);
                cnt[flag]++;
            }
            else 
            {
                flag++;
                tmp[flag] = i + 1;
                cnt[flag] = 0;
            }
        }
        
        for (int j = 0; j <= flag; ++j)
        {
            int fl = 0;
            char arr[5005] = {};
            for (int i = tmp[j]; i < cnt[j] + tmp[j]; ++i)
            {
                if(islower(str[i]))
                {
                    arr[fl] = str[i];
                    fl++;
                }
                
            }
            string ns;
            ns = arr;
            if(ns.size()) sset.insert(ns);
        }
    }
    for(auto i = sset.begin(); i != sset.end(); i++)
    {
        cout << *i << endl;
    }
    //  stack<string> st;
//  while(!st.empty()) st.pop();
//  while(!pq.empty())
//  {
//      if(!st.empty() && st.top() == pq.top()) pq.pop();
//      else
//      {
//          st.push(pq.top());
//          pq.pop();
//      }
//  }
//  while(!st.empty())
//  {
//      cout << st.top() <<endl;
//      st.pop();
//  }

    return 0;
}