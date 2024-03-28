#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
while (num--)
{
  int a,b,c;
  cin>>a>>b>>c;
  if ((a+b>=10)||(b+c>=10)||(a+c>=10))
  {
    cout<<"YES"<<endl;
  }
  else
  {
    cout<<"NO"<<endl;
  }
}

return 0;
}
