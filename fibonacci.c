#include<stdio.h>
/*int main()
{
    int i , a=0 , b=1;

    int c;
    for ( i = 0; i <= 10; i++)
    {
        c=a+b;
        printf("%d   ", c);
        a=b;
        b=c;


    }
    
}*/

int fibonacci (int n )//using recursion
{
    if (n==0) return 0;
    if( n==1)return 1;
    return fibonacci(n-1 ) + fibonacci(n-2);
    
    
}
int main()
{
    int i , n;

    printf("enter n:");
    scanf("%d" , &n);

    printf("fibonacci series : ");
    for ( i = 0; i < n; i++)
    {
        printf("%d " , fibonacci(i));
    }
    
    
}