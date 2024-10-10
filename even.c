#include<stdio.h>
int main(){
int n,count=0;
scanf("%d",&n);
for(int i=2;i<=n;i++){
if(i%2==0){
printf("%d ",i);
count++;
}
}
if(count==0){
printf("-1");
}
return 0;
}