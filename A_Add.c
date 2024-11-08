#include<stdio.h>
int add(int a,int b){
    printf("%d\n",a+b);
}
int main(){
    int x,y;
    scanf("%d%d",&x, &y);
    add(x,y);
    return 0;
}