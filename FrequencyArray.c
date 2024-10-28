#include<stdio.h>
int arr[100005];
int main(){
int n,m;
int arr1[n+5];
scanf("%d%d",&n, &m);
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr1[i]);
    arr[arr1[i]]+=1;
}
for (int i = 1; i <= m; i++)
{
    printf("%d\n",arr[i]);
}



    return 0;
}