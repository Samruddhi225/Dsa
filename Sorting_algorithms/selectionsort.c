#include <stdio.h>

int main()
{
    int a[100], i , j ,k,min, temp, n ;
    printf("enter N:");
    scanf("%d",&n);

    printf("enter elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array :");
    for ( j = 0; j < n; j++)
    {
        printf(" %5d",a[j]);
    }
    

    for ( i = 0; i < n; i++)
    {
        min=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
            
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;

        printf("\nafter pass %d:  ", i+1);
        for ( k = 0; k < n; k++)
        {
            printf("%d " , a[k]);
        }
        
    }
    
    printf("\nsorted array :  ");
    for ( k = 0; k < n ; k++)
    {
        printf("%5d",a[k]);
    }
    
/*
   for ( i = 0; i < n; i++)
   {
        min=i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min=j;
            }
        
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;  

        printf("\nafter pass %d :  ",i + 1);
        for ( k = 0; k < n ; k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
    }
    printf("\nsorted array is:");
    for ( k = 0; k < n; k++)
    {
        printf("%5d",a[k]);
    }
    
/*
    for ( i = 0; i < n; i++)
    {   min=i;
        for ( j = i+1; j < n; j++)
        {
            
            if (a[j]<a[min])
            {
                min=j;
            }
            
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        
    }
    printf("sorted array is\n");
    for ( k = 0; k < n; k++)
    {
        printf("%5d",a[k]);
    }
    
*/
}
