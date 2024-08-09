#include<bits/stdc++.h>
using namespace std;
int main(){
int input;
cin>>input;
while (input--)
{
  int n;
  cin>>n;
  int tendig = n / 10;
  int unitdig = n % 10;
  int sum = tendig + unitdig;
  cout<<endl<<sum;
}

return 0;
}