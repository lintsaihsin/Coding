#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    string a;
    set<string> st;
    while(getline(cin, a))
    {
        st.insert(a);
    }
    for (auto i : st)
    {
        string s1;
        string s2;
        for (int j = 0; j < i.size(); ++j)
        {
            s1 = i.substr(0,j);
            s2 = i.substr(j);
            if(st.count(s1) && st.count(s2))
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}