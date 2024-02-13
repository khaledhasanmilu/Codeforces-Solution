#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sh;
    cin >> sh;
    for (int i = 0; i < sh.length(); i++)
    {
        if (sh[0] >= 'a' && sh[0] <= 'z')
        {
            sh[0] -= 32;
        }
        
    }
    for (int i = 0; i < sh.length(); i++)
        {
            cout << sh[i];
        }

    return 0;
}