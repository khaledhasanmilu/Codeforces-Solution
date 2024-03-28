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
    int n;
    cin>>n;
    n=n*2;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (i % 4 == 0 || i % 4 == 1)
        {
          if (j % 4 == 0 ||j%4==1)
          {
            cout << "#";
          }
          else
          {
            cout << ".";
          }
        }
        else
        {
          if (j % 4 == 2 || j % 4 == 3)
          {
            cout << "#";
          }
          else
          {
            cout << ".";
          }
        }
      }
      cout<<endl;
    }
  }
  return 0;
}