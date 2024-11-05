#include<stdio.h>
int main(){
    int day,month,year,Update_day,second_update_Day;
    scanf("%d",&day);
    if (day>=365)
    {
        year = day / 365;
        printf("%d years\n",year);
        Update_day = day - (365*year);
        if (Update_day>=30)
        {
             month = Update_day/30;
             printf("%d months\n",month);
        }
        second_update_Day = Update_day-(30*month) ;
        printf("%d days\n",second_update_Day);
    }
    if (day<365 && day>30)
    {
        year = day / 365;
        printf("%d years\n",year);
        month = day / 30;
        printf("%d months\n",month);
        Update_day = day - (30*month);
        printf("%d days\n",Update_day);
    }
    if (day<=30)
    {
        year = day / 365;
        printf("%d years\n",year);
        month = day / 30;
        printf("%d months\n",month);
        Update_day = day - (30*month);
        printf("%d days\n",Update_day);

    }
    

    return 0;
}