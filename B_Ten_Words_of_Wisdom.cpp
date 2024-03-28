#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Faster                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
int main()
{
  Faster;
  int x;
  cin >> x;
  while (x--)
  {
    int n;
    cin >> n;
    int max = 0, result;
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      if (a < 11)
      {
        if (b > max)
        {
          max = b;
         result = i + 1;
        }
      }
    }
    cout <<result << endl;
  }

  return 0;
}