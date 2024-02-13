#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int temp = 0;
    cin >> temp;
    if (temp == 1)
    {
      cout << 2<<endl;
    }
    else if (temp % 3 == 0)
    {
      int d = temp / 3;
      cout << d << endl;
    }
    else
    {
      int e = (temp /3) + 1;
      cout << e << endl;
    }
  }

  return 0;
}