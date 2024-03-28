#include <iostream>
using namespace std;
int main()
{
  int n=0, a,r=0;
  cin >> a;
  for (int i = 0; i < a; i++)
  {
      r=n%10;
        if(r==0)
        {
            n/=10;
        }
        else
            n-=1;
  }
  cout << n << endl;

  return 0;
}