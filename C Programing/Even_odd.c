#include<stdio.h>
#include<stdbool.h>

bool Even_odd(int iValue)
{
    if(iValue %2==0)
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

    bret=Even_odd(No);

    if(bret==true)
    {
        printf("Number is Even:");
    }
    else
    {
        printf("Number is Odd:");
    }


    return 0;
}