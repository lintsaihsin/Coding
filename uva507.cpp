#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int arr[20005] = {0};
    cin >> t;
    for(int cs = 1; cs <= t; cs++){
        int n;
        cin >> n;
        for (int i = 1; i < n; ++i)
        {
            cin >> arr[i];
        }
        int maxx = 0;
        int cntf = 0;
        int mxf = 1;
        int mxt = 1;
        int mx = 0;
        for (int i = 1; i < n; ++i)
        {
            arr[i] += arr[i-1];
            // cout << i << " " << arr[i] << endl;
            if(arr[i] < 0) {
                cntf = i;
                arr[i] = 0;
            }
            if(arr[i] > maxx || (arr[i] == maxx && (i - cntf) > mx)){
                maxx = arr[i];
                mxt = i;
                mxf = cntf;
                mx = (mxt - cntf);
            }
        }
        // for (int i = 1; i < n; ++i) cout << arr[i] << " ";
        //  cout << endl;
        if(maxx == 0) printf("Route %d has no nice parts\n", cs);
        else printf("The nicest part of route %d is between stops %d and %d\n", cs, mxf+1, mxt+1);
    }
    return 0;
}