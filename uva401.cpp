#include<bits/stdc++.h>
using namespace std;

int main()
{
  char rev[150] = {};
  memset(rev, '\0', sizeof(rev));
  rev[65] = 'A';
  rev[69] = '3';
  rev[72] = 'H';
  rev[73] = 'I';
  rev[74] = 'L';
  rev[76] = 'J';
  rev[77] = 'M';
  rev[79] = 'O';
  rev[83] = '2';
  rev[84] = 'T';
  rev[85] = 'U';
  rev[86] = 'V';
  rev[87] = 'W';
  rev[88] = 'X';
  rev[89] = 'Y';
  rev[90] = '5';
  rev[49] = '1';
  rev[50] = 'S';
  rev[51] = 'E';
  rev[53] = 'Z';
  rev[56] = '8';

  // for(char i = 'A'; i <= 'Z'; i++)
  // {
  //   int tmp;
  //   tmp = i;
  //   cout << i << " " << rev[tmp] << endl;
  // }
  string str;
  while(getline(cin, str))
  {
    int odd = 0;
    if(str.size() % 2 == 0) odd = 0;
    else odd = 1;
    int pl = 0;
    int ms = 0;
    int mp = 0;

    for (int i = 0; i < str.size()/2; i++)
    {
      //cout << rev[str[i]] << " "<< str[str.size()-1-i];
      if((rev[str[i]] == str[str.size()-1-i]) && (str[i] == str[str.size()-1-i]))
      {
        ms += 2;
        mp += 2;
      }
      else if(rev[str[i]] == str[str.size()-1-i])
      {
        ms += 2;
      }
      if(str[i] == str[str.size()-1-i])
      {
        pl += 2;
      }
    }
    //cout << "odd : " << odd << endl; 
    if(odd)
    {
      int p;
      p = str.size() / 2;
      //cout << str[p] << endl;
      if(str[p] == rev[str[p]])
      {
        mp++;
        ms++;
      }
      pl++;
    }
    //printf("ms : %d, mp : %d, pl : %d , str.size : %d\n", ms, mp, pl , str.size());
    if(mp == str.size())
    {
      cout << str << " -- is a mirrored palindrome." << endl;
    }
    else if(ms == str.size())
    {
      cout << str << " -- is a mirrored string." << endl;
    }
    else if(pl == str.size())
    {
      cout << str << " -- is a regular palindrome." << endl;
    }
    else 
    {
      cout << str << " -- is not a palindrome." << endl;
    }
    cout << endl;
  }
  
  return 0;
}