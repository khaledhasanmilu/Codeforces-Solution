/*Code Author : Md Khaled hasan Milu.
Gmail: kh.milu338@gmail.com
*/
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
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b< c)
    {
      cout << "STAIR" << endl;
    }
    else if (a < b && b > c)
    {
      cout << "PEAK" << endl;
    }
    else
    {
      cout << "NONE" << endl;
    }
  }
  return 0;
}