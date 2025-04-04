
#include <stdio.h>
int main()
{
    int n , i ;

    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements of array:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("original  array is :");
    for ( i = 0; i < n; i++)
    {

        printf("%d", a[i]);
    }
    
    
    printf("reverse array is :");
    for (int  j = n-1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
}