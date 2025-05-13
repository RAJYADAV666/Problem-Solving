#include<stdio.h>
int Sum_Digit(int iValue)
{
    int iSum=0;
    int iDigit=0;

    while(iValue !=0)
    {   
        iDigit=iValue % 10;

        iSum=iSum+iDigit;

        iValue=iValue/10;
        
    }

    return iSum;

}
int main()
{
    int No=0;
    int iAns=0;

    printf("Enter the Number:\n");
    scanf("%d",&No);

    iAns=Sum_Digit(No);

    printf("The Sum of Digit is %d\n",iAns);

}