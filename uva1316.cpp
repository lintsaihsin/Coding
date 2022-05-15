#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        int p, d, max = 0 ,arr[10000] = {0};
        vector<int> vec[10005];
        priority_queue <int> pq;

        while(n--)
        {
            scanf("%d %d", &p, &d);
            vec[d].push_back(p);
        }

        int ans = 0;
        for (int i = 10000; i > 0; i--)
        {
            for (int j = 0; j < vec[i].size(); ++j)
            {
                if(vec[i][j] > 0) pq.push(vec[i][j]);
            }

            if(pq.size() == 0)  continue;

            ans+=pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }
    return 0;
}


