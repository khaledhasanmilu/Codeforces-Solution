#include <iostream>
using namespace std;
int main()
{
  string s;
  int upper = 0, lower = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i]>='A'  && s[i]<='Z')
    {
      upper++;
    }
    else if (s[i]>='a'  && s[i]<='z')
    {
      lower++;
    }
  }
  if (upper > lower)
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = toupper(s[i]);
    }
    cout << s << endl;
  }
  else if (upper < lower || upper == lower)
  {
    for (int i = 0; i < s.size(); i++)
    {
      s[i] = tolower(s[i]);
    }
    cout << s << endl;
  }

  return 0;
}