/*----------**********---------
  Author: MD. Khaled hasan Milu
------------*********----------*/
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define Fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;
void answer();
int main()
{
    Fast;
    int num;
    cin >> num;
    while (num--)
    {
        answer();
    }

    return 0;
}
void answer()
{
    int arr[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}

    };
    int result = 0;
    char m;
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            cin>>m;
            if(m=='X')
                result+=arr[i][j];
        }
        
    }
    cout<<result<<endl;
    
}