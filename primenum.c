#include <stdio.h>
int main()
{
    int n ,m=0, i,flag=0;
    printf("enter number to check:");
    scanf("%d",&n);

    m=n/2;
    for ( i = 2; i <=m; i++)
    {
        if (n%i==0)
        {
            printf("not a prime number");
            flag=1;
            break;
            
        }
       
        
    }
    if (flag==0)
    {
        printf("it is prime number");
    }
    
    
}