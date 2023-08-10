#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t , idx,count=0;
   cin>>t>>idx;
   int arr[t];
   for (int i = 0; i < t; i++)
   {
    cin>>arr[i];
   }
   
   for (size_t i = 0; i < t; i++)
   {
    if (arr[idx-1]!=0)
    {
        if (arr[i]>=arr[idx-1])
        {
            count++;
        }
        
    }else{
        if (arr[i]>arr[idx-1])
        {
            count++;
        }
        
    }
    
   }
   
    cout<<count<<endl;
    return 0;
}