#include <stdio.h>
int main()
{
    
    int n , j , i , a[n];

    printf("enter n:");
    scanf("%d",&n);

    printf("enter elements of array:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    int result=0;
    for ( j = 0; j < n; j++)
    {
        result= result+a[j];
    }
    printf("\nsum of all elements of array is : %d" , result);

    
}
