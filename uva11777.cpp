#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for (int ca = 1; ca <= n; ++ca)
    {
        cout << "Case " << ca << ": ";
        int m;
        int s = 0;
        int tmp = 0;
        int min = 101;
        for (int i = 1; i <= 7; ++i)
        {
            cin >> m;
            if(i < 5)s += m;
            else if(i >= 5) 
            {
                tmp += m;
                if(m < min)min = m;
            } 
        }
        s = s + (tmp - min)/2;
        if(s >= 90) cout << "A" << endl;
        else if(s >= 80) cout << "B" << endl;
        else if(s >= 70) cout << "C" << endl;
        else if(s >= 60) cout << "D" << endl;
        else cout << "F" << endl;
    }
    return 0;
}