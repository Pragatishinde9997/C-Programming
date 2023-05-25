#include<stdio.h>
int main()
{
    int week;
    printf("Enter a week number\n");
    scanf("%d",&week);
    if(week==0  || week==6)
        printf("Weekend");
    else if(week==1)
        printf("Monday");
    else if(week==2)
        printf("Tuesday");
    else if(week==3)
        printf("Wednesday");
    else if(week==4)
        printf("Thursday");
    else if(week==5)
        printf("Friday");
    else
        printf("Invalid day");
    return 0;
}
