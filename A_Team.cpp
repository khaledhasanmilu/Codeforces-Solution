#include<bits/stdc++.h>
using namespace std;
int main(){

int num;
cin>>num;
int count=0;
while(num--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b+c>=2){
        count++;
    }
}
cout<<count<<endl;

    return 0;
}