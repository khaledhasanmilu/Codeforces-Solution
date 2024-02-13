
/*#include <iostream>
using namespace std;
int main()
{
  string s;
  int value = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++)
  {
    value += int(s[i]);
  }
  if (value % 2 == 0)
  {
    cout << "CHAT WITH HER!" << endl;
  }
  else if (value % 2 != 0)
  {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int l, count = 0, i;

  string s;

  cin >> s;

  l = s.length();

  sort(s.begin(), s.end());

  for (i = 1; i < l; i++)
  {
    if (s[i] != s[i - 1])

    {
      count++;
    }
  }
  if ((count + 1) % 2 == 0)

  {
    cout << "CHAT WITH HER!" << endl;
  }

  else

  {
    cout << "IGNORE HIM!" << endl;
  }

  return 0;
}
