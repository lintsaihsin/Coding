#include <iostream>
#include <map>
#include<iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d\n", &t);
    int i;
    map<string, double> mp;
    mp.clear();
    while(t--)
    {
        string a;
        i = 0;
        while(getline(cin, a) )
        {
            if( a.size()>0 && mp.count(a) == 0)
            {
                mp.insert(pair<string, double> (a, 1));
                i++;
            }
            else if (a.size()>0)
            {
                mp[a]++;
                i++;
            }
            else if(a.size() == 0)
            {
                break;
            }
        }
        for(auto it: mp)
                {
                    if(it.first.size() != 0)
                    {
                        cout <<it.first<< " "<< fixed  <<  setprecision(4) << (it.second/i)*100 << endl;    
                    }
                    
                }
if(t != 0) cout << endl;
                mp.clear();
    }

    return 0;
}
