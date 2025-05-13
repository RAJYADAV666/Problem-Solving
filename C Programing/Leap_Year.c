#include<stdio.h>
#include<stdbool.h>

bool Leap_year(int iValue)
{
    if(iValue % 4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int No=0;
    bool bret=false;


    printf("Enter the Number:\n");
    scanf("%d",&No);

    bret=Leap_year(No);

    if(bret==true)
    {
        printf("Leap Year:");
    }
    else
    {
        printf("Not Leap Year:");
    }


    return 0;
}