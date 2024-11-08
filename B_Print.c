#include<stdio.h>
int print(int a){
    for (int i = 1; i <= a; i++)
    {
        printf("%d",i);
        if (i<a)
        {
            printf(" ");
        }
        
    }
    
}
int main(){
    int x;
    scanf("%d",&x);
    print(x);
    return 0;
}