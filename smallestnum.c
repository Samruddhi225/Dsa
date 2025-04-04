#include <stdio.h>
int main()
{
    int  n , i, largest ,  smallest;

    printf("enter n");
    scanf("%d" , &n);
    int a[n];
    printf("enter elements :");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);

    }
    for ( i = 0; i < n ; i++)
    {
        printf("%d", a[i]);

    }
    smallest= a[0];
    for ( i= 1; i < n ; i++)
    {
        if (a[i]<smallest)
        {
            smallest = a[i];
        }
        
        
    }
    largest= a[0];
    for ( i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest= a[i];
        }
        
    }
    





    printf("\nsmallest element in the array is %d " , smallest);
    
    printf("\nlargest element in the array is %d " , largest);
}