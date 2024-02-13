#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long in;
    string ,s;
    while(cin>>>>s)
    {
        long sum1=0,sum2=0;
        for(in=0; in<.size(); in++)
        {
            if([in]>='A'&&[in]<='Z')
                [in]=[in]-'A'+97;

            if(s[in]>='A'&&s[in]<='Z')
                s[in]=s[in]-'A'+97;
        }
        for(in=0; in<s.size(); in++)
        {
            if([in]>s[in])
                {
                    cout<<"1\n";
                    return 0;}

            if(s[in]>[in])
                {
                    cout<<"-1\n";
                    return 0;
                }

        }
        cout<<"0\n";
    }
    return 0;
}