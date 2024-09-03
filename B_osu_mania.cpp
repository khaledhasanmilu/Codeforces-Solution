//khaled Hasan Milu --United International University.
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
  int input;
  cin >> input;
  while (input--)
  {
    int n; 
    cin >> n;
    vector<int> res(n);
    for (int i = 0; i < n; ++i)
    {
      string r;
      cin >> r;
      for (int j = 0; j < 4; ++j)
      {
        if (r[j] == '#')
        {
          res[n - i - 1] = j + 1;
          break;
        }
      }
    }
    for (int i = 0; i < n; ++i)
    {
      cout << res[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
