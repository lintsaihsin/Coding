#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int d = 0;
    while(~(scanf("%d\n", &t)))
    {
        d++;
        cout << "Day #" << d << ": the longest nap starts at ";
        priority_queue <int,vector<int>,greater<int>> pq; 
        pq.push(600);
        int tmp;
        for (int i = 0; i < t; ++i)
        {
            string str;
            getline(cin, str);
            tmp = (str[0]-'0')*600 + (str[1] - '0') * 60  + (str[3] - '0')*10 + (str[4] - '0');
            pq.push(tmp);
            tmp = (str[6]-'0')*600 + (str[7] - '0') * 60  + (str[9] - '0')*10 + (str[10] - '0');
            pq.push(tmp);
        }
        pq.push(1080);
        int time;
        int max = 0;
        for (int i =  0; i <= (t+1)*2; i+=2)
        {
            int n, m;
            n = pq.top();
            pq.pop();
            m = pq.top();
            pq.pop();
            tmp = m-n;
            if(tmp > max)
            {
                max = tmp;
                time = n;
            }
        }
        int hr, mn;
        hr = time/60;
        mn = time%60;
        int hrm, mnm;
        hrm = max/60;
        mnm = max%60;
        cout << setfill('0') << setw(2) << hr << ":" << setw(2) << mn <<  " and will last for " ;
        if(hrm > 0) cout << hrm << " hours and ";
        cout << mnm << " minutes." << endl;
    }
    return 0;
}