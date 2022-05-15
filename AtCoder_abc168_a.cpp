#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    if(t % 10 == 2 || t % 10 == 4 || t % 10 == 5 || t % 10 == 7 || t % 10 == 9 ) cout << "hon";
    else if(t % 10 == 0 || t % 10 == 1 || t % 10 == 6 || t % 10 == 8) cout << "pon";
    else if(t % 10 == 3 ) cout << "bon";
    return 0;
}