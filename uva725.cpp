#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int ttl = 0;
    while(cin >> t && t)
    {
        if(ttl)  cout << endl;
        ttl++;
        int cnt = 0;
         bool arr[15] = {false};
        for(int i = 1234; i < 98766; i++)
        {
            int flag = 0;
            bool arr[15] = {false};
            string str1, str2;
            str1 = to_string(i);
            if(str1.size() == 4) arr[0] = true;
            for (int j = 0; j < str1.size(); ++j)
            {
                if(arr[str1[j] - '0'])
                {
                    flag++;
                    break;
                }
                else if(!arr[str1[j] - '0'])
                {
                    arr[str1[j] - '0'] = true;
                }
            }
            if(!flag && (i * t) > 10000 && (i * t) < 98766)
            {
                str2 = to_string( i * t);
                for(int j = 0; j < str2.size(); j++)
                {
                    if(arr[str2[j] - '0'] == true)
                    {
                        flag++;
                        break;
                    }
                    else if(arr[str2[j] - '0'] == false)
                    {
                        arr[str2[j] - '0'] = true;
                    }
                }                
            }
            else flag = 1;
            if(str1.size() == 4) str1.insert(0, "0");
            if(!flag) 
            {
                cout << str2 << " / " << str1 << " = " << t<<endl;
                cnt++;
            }
         }
         if(cnt == 0) cout <<"There are no solutions for " << t <<".\n";
        
    }
    return 0;
}