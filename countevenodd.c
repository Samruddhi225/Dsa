#include <stdio.h>
int main()
{
    int i, n , even =0 , odd=0;
    printf("enter n :");
    scanf("%d" , &n);
    int a[n];

    printf("enter elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d" , &a[i]);

    }
    for ( i = 0; i < n; i++)
    {
        printf("%d  " , a[i]);
        
    }

    for ( i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            even++;

        }
        else
        {
            odd++;
        }
        
    }
    printf("\ncount  of even  numbers %d  " , even);
    printf("\ncount of odd numbers %d " , odd  );



}