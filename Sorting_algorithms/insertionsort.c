#include <stdio.h>

int main()
{

    int a[100],n , i , j , k , temp;

    printf("enter N:");
    scanf("%d",&n);

    printf("enter elements:");
    for ( j= 0; j< n; j++)
    {
        scanf("%d",&a[j]);
    }
    printf("Array before Sorting :  ");
    for ( j = 0; j < n; j++)
    {
        printf("%d",a[j]);
    }
    printf("\n");

    for ( i = 0; i < n; i++)
    {
        temp=a[i];
        j=i-1;
        while (j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;

        printf("\nafter pass %d", i+1 );
        for ( k = 0; k < n; k++)
        {
            printf("%5d" , a[k]);
        }
        printf("\n");
    }
    printf("sorted array is :  ");
    for ( k = 0; k < n; k++)
    {
        printf("%5d" , a[k]);
    }
    
    


}    