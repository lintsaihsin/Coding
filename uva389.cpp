#include <bits/stdc++.h>
using namespace std;

long long int arr[21][10] = {0};

int main(int argc, char const *argv[])
{
    
    for (int i = 2; i <= 16 ; ++i) 
    {
        arr[i][8] = 1;
        for (int j = 7; j >= 1 ; j--)arr[i][j] = arr[i][j+1] * i;
    }
    string str;
    int a, b;
    while(cin >> str >> a >> b)
    {
        int tmp = 0;
        int cnt = 1;
        for (int i = str.size()-1; i >= 0; i--)
        {
            if(isalpha(str[i]) ) str[i] = str[i] - 'A' + 10;
            else str[i] = str[i] - '0';
            tmp += (str[i] * cnt);
            cnt *= a;
        }
        cnt = 0;
        if(tmp == 0)
        {
            cout << "      0" << endl ;
            continue;
        }
        for (int i = 2; i <= 8; ++i)
        {
            
            if(tmp >= arr[b][1])
            {
                cout << "  ERROR" ;
                break;
            }

            //cout << "in" << endl;
                if(tmp < arr[b][i] && cnt == 0)cout << " ";
                else
                {
                    //cout << "tmp : " << tmp << " "<< arr[b][i]<< endl;
                    if(tmp / arr[b][i] == 10)cout << "A";
                    else if(tmp / arr[b][i] == 11)cout << "B";
                    else if(tmp / arr[b][i] == 12)cout << "C";
                    else if(tmp / arr[b][i] == 13)cout << "D";
                    else if(tmp / arr[b][i] == 14)cout << "E";
                    else if(tmp / arr[b][i] == 15)cout << "F";
                    else if(tmp / arr[b][i] < 10)cout << tmp / arr[b][i];
                    cnt++;
                }
                tmp %= arr[b][i];
                //cout << tmp;
            

        }
        cout << endl;
    }
    return 0;
}
