#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str1, str2;
  while(cin >> str1 >> str2)
  {
    queue<char> q1;
    queue<char> q2;
    while(!q1.empty()) q1.pop();
    while(!q2.empty()) q2.pop();
    for(int i = 0; i < str1.size(); i++)
    {
      q1.push(str1[i]);
    }
    for(int i = 0; i < str2.size(); i++)
    {
      q2.push(str2[i]);
    }
    while(!q2.empty()) 
    {
      if(q2.front() == q1.front())
      {
        q2.pop();
        q1.pop();
      }
      else q2.pop();
    }
    if(q1.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;

  }
  return 0;
}