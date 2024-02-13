#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a, b, c;
    while (num--)
    {
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << '+' << endl;
        }
        else
        {
            cout << '-' << endl;
        }
    }
    return 0;
}