#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int temp;
    cin>>temp;
    while(temp--)
    {
        string m,temp;
        cin>>m;
        int lent = m.length();
        for(int i=0; i<lent-1; i++){
            if(i == 0){
                temp +=m[i];
            }
            if(m[i] == m[i-1]){
                temp +=m[i];
                i++;
            }
        }
        temp +=m[lent-1];
        cout<<temp<<endl;

    }

    return 0;
}