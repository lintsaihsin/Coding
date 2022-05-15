#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int num;
    while(~scanf("%d", &num) && num != 0)
    {
        cout << "Discarded cards:";
        queue <int> qu;

        for (int i = 1; i <= num; ++i)
        {
            qu.push(i);
        }
        
        int t;
        t = num;
        int flag = 0;

        while(qu.size() != 1)
        {
            if(flag != 0)
            {
                cout<< ",";
            }
            
            cout << " "<<qu.front() ;
            flag =1;
            qu.pop();
            int tmp;
            tmp = qu.front();
            qu.pop();
            qu.push(tmp);

        }
        cout << "\nRemaining card: ";
        for (int i = 0; i < qu.size(); ++i)
        {
            cout << qu.front()<<endl;
            qu.pop();
        }
        
    }

    return 0;
}