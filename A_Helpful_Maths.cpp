#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> n;
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] != '+')
    {
      int x = s[i] - 48;
      n.push_back(x);
    }
  }
  sort(n.begin(), n.end());
  for (int i = 0; i < n.size(); i++)
  {
    cout << n[i];
    if (i != n.size() - 1)
    {
      cout << '+';
    }
  }
  cout << endl;
  return 0;
}