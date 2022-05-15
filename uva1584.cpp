#include<bits/stdc++.h>
using namespace std;

int main()
{
  int cs;
  cin >> cs;
  while(cs--)
  {
    string str;
    cin >> str;
    priority_queue < string, vector<string>, greater<string>> pq;
    for(int i = 0; i < str.size(); i++)
    {
      pq.push(str);
      string tmp;
      tmp = str[0];
      str.erase(0, 1);
      str += tmp;
    }
    cout << pq.top() << endl;
  }
  return 0;
}