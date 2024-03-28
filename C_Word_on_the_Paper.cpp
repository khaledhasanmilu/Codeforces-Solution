#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  while (num--)
  {
    string s;
    char ch;
    for (int i = 0; i < 8; i++)
    {
      for (int i = 0; i < 8; i++)
      {

        cin >> ch;
        if (ch != '.')
        {
          s += ch;
        }
      }
    }
    cout << s << endl;
  }

  return 0;
}