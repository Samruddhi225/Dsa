#include <stdio.h>
int decimaltobinary(int decinum){
    int pow=1;
    int rem=0,ans=0;
    while (decinum>0)
    {
        rem=decinum%2;
        decinum=decinum/2;
        ans+=(rem*pow);
        pow=pow*10;

    }
    return ans;
    

}
int main()
{
    int decinum;
    printf("enter decimal number:");
    scanf("%d",&decinum);

    
    int result=decimaltobinary(decinum);

    printf("binary number of %d is %d",decinum,result);


}

