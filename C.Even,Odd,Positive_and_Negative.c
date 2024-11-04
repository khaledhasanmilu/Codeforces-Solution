#include<stdio.h>
int main(){
int num,input;
scanf("%d",&num);
int even=0,odd=0,positive=0,negative=0;
for (int i = 0; i < num; i++)
{
    scanf("%d",&input);
    if (input%2==0)
    {
        even++;
    }
    else if (input%2!=0)
    {
        odd++;
    }
    if (input<0)
    {
        negative++;
    }
     if (input>0)
    {
        positive++;
    }   
}
printf("Even: %d\n",even);
printf("Odd: %d\n",odd);
printf("Positive: %d\n",positive);
printf("Negative: %d\n",negative);
    return 0;
}