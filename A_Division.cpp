/*Code Author : Md Khaled hasan Milu.
Gmail: kh.milu338@gmail.com
*/
#include <iostream>
using namespace std;
int main()
{
  int n, a;
  cin >> n;
  while (n--)
  {
    cin >> a;
    if (a >= 1900)
    {
      cout << "Division 1" << endl;
    }
    if (1600 <= a && a <= 1899)
    {
      cout << "Division 2" << endl;
    }
    if (1400 <= a && a <= 1599)
    {
      cout << "Division 3" << endl;
    }
    if (a <= 1399)
    {
      cout << "Division 4" << endl;
    }
  }

  return 0;
}