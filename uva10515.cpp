#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[10][4] = {0};

    arr[2][1] = 2;
    arr[2][2] = 4;
    arr[2][3] = 8;
    arr[2][0] = 6;
    arr[3][1] = 3;
    arr[3][2] = 9;
    arr[3][3] = 7;
    arr[3][0] = 1;
    arr[4][1] = arr[4][3] = 4;
    arr[4][2] = arr[4][0] = 6;
    for (int i = 0; i <= 3; ++i)
    {
        arr[0][i] = 0;
        arr[1][i] = 1;
        arr[5][i] = 5;
        arr[6][i] = 6;
    }
    arr[7][1] = 7;
    arr[7][2] = 9;
    arr[7][3] = 3;
    arr[7][0] = 1;
    arr[8][1] = 8;
    arr[8][2] = 4;
    arr[8][3] = 2;
    arr[8][0] = 6;
    arr[9][1] = arr[9][3] = 9;
    arr[9][2] = arr[9][0] = 1;

    string n, m;
    int nn, mn;
    while(cin >> n >> m && n != "0" ||  m != "0")
    {
        if(n == "0") cout << 0 << endl;
        else if(m == "0") cout << 1 << endl;
        else
        {
            // cout << "size " << n.size() << " " << m.size() << endl;
            // cout << "num " <<endl;
            // cout << n[n.size()-1] << endl;
            nn =  n[n.size()-1] - '0';
            if(m.size() > 1)
            {
                mn = (m[m.size()-2] - '0')*10 + m[m.size()-1] - '0';
                //cout << m[m.size()-2] << " " <<m[m.size()-1] << endl;
            }
            else  mn =  m[m.size()-1] - '0';
            mn = mn % 4;
            cout << arr[nn][mn] << endl;
        }
        //cout << "yes" << endl;
    }
    return 0;
}
