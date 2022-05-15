 #include <bits/stdc++.h> 
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        
        string str;
        getline(cin, str);
        char fin[16][15] = {"0000000000", "0111001111", "0111001110", "0111001100", "0111001000", "0111000000", "0110000000", "0100000000", "0010000000", "1111001110", "1111001100", "1111001000", "1111000000", "1110000000", "1100000000"};
        int ans[15] = {0};
        int cur = 0;
        int next = 0;
        for (int i = 0; i < str.size(); ++i)
        {
            if(isupper(str[i]) )
            {
                if(str[i] >= 'C') next = str[i] - 'C' + 8;
                else next = str[i] - 'A' + 13;
            } 
            if(islower(str[i]) )
            {
                if(str[i] >= 'c') next = str[i] - 'c' + 1;
                else next = str[i] - 'a' + 6;
            } 
            for (int j = 0; j < 10; ++j)
            {
                if(fin[next][j] == '1' && fin[cur][j] == '0')
                {
                    ans[j]++;
                }
            }
            cur = next;
        }
        cout << ans[0];
        for (int i = 1; i < 10; ++i)
        {
            cout << " "<< ans[i] ;
        }
        cout << endl;
    }
    return 0;
}