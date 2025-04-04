#include <stdio.h>//factorial
int factorial(int n )
{
    if(n==2)
    return n;
    return n*factorial(n-1);

}
int main()
{
    int n ;
    printf("enter n:");
    scanf("%d",&n);
    

    printf("factorial:%d",factorial(n));
    return 0 ;
}