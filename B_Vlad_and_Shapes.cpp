#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x = 0;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
                x += 1;
        }

        if (x != 0)
            v.push_back(x);
    }

    int fl = 0 , tr= 0;
    int x = v[0];
    for (int i = 1; i < v.size(); i++)
    {   
        if(v[i]==v[0]){
            fl = 1;
        }else if(v[i]=x-2){
            tr =1;
            fl = 0;
        }else if(v[i] = x+2){
              tr =1;
              fl = 0;
        }else{
            tr = 0;
            fl = 0;
            break;
        }
        x = v[i];
    }
    if(fl){
        cout<<"SQUARE"<<endl;
    }else if(tr){
        cout<<"TRIANGLE"<<endl;
    }
}



