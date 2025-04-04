#include <stdio.h>
int main()
{
    int n ,element, i, j  ;

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
        printf("%d" , a[i]);
        
    }

    printf("\nenter element to search:");
    scanf("%d", &element);

    for ( j = 0; j < n; j++)
    {
        if (a[j]==element)
        {
            printf("element %d found  at position %d",element,  j);
            break;
        }
        
        else
        printf("element not found");
    }
    
    return 0 ;

    
    
    
    
    


}