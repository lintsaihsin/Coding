#include<bits/stdc++.h>
using namespace std;

struct line
{
    double x1;
    double y1;
    double x2;
    double y2;
    double vx;
    double vy;
    bool operator<(const line rhs)const{
        return max(y1, y2)> max(rhs.y1, rhs.y2) || max(y1, y2)== max(rhs.y1, rhs.y2) && min(y1, y2) < min(rhs.y1, rhs.y2);
    }
};

int main()
{
    int cs;
    cin >> cs;
    int fg = 0;
    while(cs--){

        if(fg) cout<< endl;
        fg = 1;
        int l;
        cin >> l;
        vector<line> v;
        v.clear();
        for (int i = 0; i < l; ++i)
        {
            double x1, y1, x2, y2, vx, vy;
            cin >> x1 >> y1 >> x2 >> y2;
            vx = x2 - x1; 
            vy = y2 - y1;
            v.push_back(line{x1, y1, x2, y2, vx, vy});
        }
        sort(v.begin(), v.end());
        // for(auto i : v) cout<< i.x1 << " " << i.y1 << " " << i.x2 << " " << i.y2  << endl;
        int w;
        cin >> w;
        while(w--)
        {
            double x, y;
            cin >> x >> y;
            for(auto i : v)
            {
                // printf("%f %f %f %f %f %f \n",i.x1, i.y1, i.x2, i.y2, i.vx, i.vy);
                double ny;
                ny = ((x- i.x1)/ i.vx) * i.vy + i.y1;
                // cout << "ny : " << ny << endl;
                if(y >= ny && x >= min(i.x1, i.x2) && x <= max(i.x1, i.x2)){
                    if(i.y1 < i.y2){
                        // cout << "in 1 \n";
                        y = i.y1;
                        x = i.x1;
                        // cout << "in 1 " << x << " " << y << endl;
                    }
                    else {
                        y = i.y2;
                        x = i.x2;
                        // cout << "in 2 " << x << " " << y << endl;
                    }
                } 
            }
            cout << x << endl;
        }

    }
    return 0;
}