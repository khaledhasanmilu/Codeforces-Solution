#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
while (num--)
{
  string sh;
  cin>>sh;
  if(sh.length()>10){
    cout<<sh[0]<<sh.length()-2<<sh[sh.length()-1]<<endl;
  }
  else{
    cout<<sh<<endl;
  }
}
    return 0;
}