#include <bits/stdc++.h>
using namespace std;
int  N = 20000000;
int main()
{

   vector<int> rs(N,0);
    for (int i = 1; i < rs.size(); i++)
    {
      int x=i , y=0;
      while (x)
      {
        y+=x%10;
        x/=10;
      }
      rs[i]=rs[i-1]+y;
    }

  
  
  int n;
  cin >> n;

  while (n--)
  {
    int m;
    cin >> m;
    cout<<rs[m]<<endl;
  }

  return 0;
}