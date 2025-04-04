#include <stdio.h>
#include <limits.h> 
int main()
{
    int  n , i, largest = -1 ;
    int secondlargest =-1;
    

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
        printf("%d  ", a[i]);

    }
    for ( i = 0; i < n ; i++)//find largest element in the array
    {
        if (a[i]>largest)
        {
            largest=a[i];
        }
        
    }
    printf("\nlargest number in the array  is %d " , largest);

    for ( i = 0; i < n; i++)
    {
        if (a[i]>secondlargest && a[i]!= largest)
        {
            secondlargest=a[i];
        }
        
    }
    printf("\nsecond largest number in the array is %d ", secondlargest);

    
    
    int smallest =INT_MAX;
    int secondsmallest=INT_MAX;
    for ( i = 0; i < n ; i++)//find smallest element in the array
    {
        if (a[i]< smallest)
        {
            smallest=a[i];
        }

        
    }
    printf("\nsmallest number in the array is  %d ", smallest);

   for ( i = 0; i < n; i++)
   {
        if (a[i] < secondsmallest && a[i] > smallest)
        {
            secondsmallest = a[i];
        }
        
   }
   
    
    printf("\nsecond smallest number in the array is %d", secondsmallest);
}