#include <bits/stdc++.h>
using namespace std;
int ch ;
string pg(string n)
{

        priority_queue <string,vector<char>,greater<char>> lpq; 
        priority_queue <string,vector<char>,less<char>> gpq;

        for (int i = 0; i < n.size(); ++i)
        {
            gpq.push(n[i]);
            lpq.push(n[i]);
        }
        while(lpq.top() == '0' && lpq.size() > 1) lpq.pop();
        char l[10] = {} , g[10] = {};

        int i = 0, j = 0;
        while(!lpq.empty())
        {
            l[i] = lpq.top();
            lpq.pop();
            i++;
        }
        while(!gpq.empty())
        {
            g[j] = gpq.top();
            gpq.pop();
            j++;
        }
        int c;
        c = stoi(g) - stoi(l);
        
        cout <<stoi(g) << " - " << stoi(l)<< " = " << c << endl;
        ch++;
        n = to_string(c);
        return n;
}

int main()
{
    string n, a;

    while(cin >> a && a != "0")
    {
        ch = 0;
        string arr[1000];
        string st;
        memset( arr, '\0', sizeof(arr));
        cout << "Original number was " << a << endl;
        int cnt = 0, tmp = 0, tmp2 = 0, i =0;
        n = a;

        while(1)
        {
            n = pg(n);
            arr[i] = n;
            i++;
            tmp++;
            if(tmp != 1)
            {
                for (int j = 0; j < i-1; ++j)
                {
                    
                    if(arr[j] == n)
                    {
                        tmp2++;
                        break;
                    }
                }
            }
            if(tmp2 != 0)
            {
                cout << "Chain length " << ch << endl << endl;
                break;
            }
        }
    }
    
    return 0;
}