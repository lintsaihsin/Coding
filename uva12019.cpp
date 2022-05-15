#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    int arr[15] = {0};
    arr[1] = 5;
    arr[2] = arr[4] = arr[6] = arr[8] = arr[9] = arr[11] = 31;
    arr[3] = 28;
    arr[5] = arr[7] = arr[10] = arr[12] = 30;
    string str[8] = {"Sunday", "Monday", "Tuesday" , "Wednesday", "Thursday", "Friday", "Saturday"};
    for (int i = 1; i <= 12; ++i)
    {
        arr[i] += arr[i-1];
    }
    cin >> t;
    while(t--)
    {
        int m, d;
        cin >> m >> d;
        int ttl;
        cout << str[(arr[m] + d) % 7] << endl;
    }
    return 0;
}