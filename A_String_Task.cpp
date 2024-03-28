#include <bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main()
{
  vector<char> h;
  string s;
  cin >> s;
  transform(s.begin(),s.end(),s.begin(),::tolower);
  for (int i = 0; i < s.length(); i++)
  {
    if (!(s[i] =='a' ||s[i] =='e' ||s[i] =='i' ||s[i] =='o' ||s[i] =='u'))
    {
      h.push_back('.');
      h.push_back(s[i]);
    }
  }
  for (int i = 0; i < h.size(); i++)
  {
    cout << h[i];
  }
  cout << endl;

  return 0;
}