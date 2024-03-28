#include <bits/stdc++.h>
using namespace std;
#define Faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
int main()
{
  Faster;
  int num;
  cin >> num;
  while (num--)
  {
    string s;
    cin >> s;
    string s1 = s.substr(0, 2);
    string s2 = s.substr(3, 2);
    int a = stoi(s1);
    int b = stoi(s2);
    if(a==0)a=24;
    if (a <=12)
    {
      if (a <= 9)
        cout << "0";
      cout << a << ":";
      if (b <= 9)
        cout << "0";
      cout << b;
      (a==12)?cout<<" PM":cout<<" AM";
    }
    else
    {
      a = (a - 12);
      if (a <= 9)
        cout << "0";
      cout << a << ":";
      if (b <= 9)
        cout << "0";
      cout << b;
      (a==12)?cout<<" AM":cout<<" PM";
    }
    cout << endl;
  }
  return 0;
}