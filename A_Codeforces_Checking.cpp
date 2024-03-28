/*Code Author : Md Khaled hasan Milu.
Gmail: kh.milu338@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
  int n;
  char c;
  cin >> n;
  while (n--)
  {
    cin >> c;
    if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 'c' || c == 'e' || c == 's')
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }

  return 0;
}