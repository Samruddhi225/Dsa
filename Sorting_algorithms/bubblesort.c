#include <stdio.h>

int main()
{

    int a[100],n , i , j , k , temp;

    printf("enter N:");
    scanf("%d",&n);

    printf("enter elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array %d:",a[i]);
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }

    for ( k = 0; k < n-1; k++)
    {   
        for ( j = 0; j < n-k-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]= temp;
            }        
        }
        printf("\nafter pass %d:  " ,k);
        for ( i = 0; i < n; i++)
        {
            printf("%d " , a[i]);
        }
        
    }
    printf("sorted array ");
    for ( i = 0; i < n ; i++)
    {
        printf("%d\t", a[i]);
    }
    

}