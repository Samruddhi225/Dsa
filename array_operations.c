#include <stdio.h>

int create(int a[]);
int insertion(int a[], int n ,int newvalue , int loc);
int deletion(int a[] , int n ,int loc);
int search(int a[] , int n , int element);



int main()
{
    int a[100] , n ,i;
    n=create(a);

    n=insertion(a , n , 8, 4);

    n=deletion(a , n   ,2);

    int index =search(a , n , 4);
    if (index ==-1)
    {
        printf("elemnt not found\n");

    }
   
}




int create( int a[])
{
    int n , i ;
    printf("enter N");
    scanf("%d",&n);

    printf("enter elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%5d",a[i]);

    }
    return n ;
}
int insertion(int a[] , int n ,int newvalue ,int loc )
{
    int i ;

    if (loc<n)
    {
        for ( i = n-1; i >=loc-1; i--)
    {
        a[1+i]=a[i];

    }
    a[loc-1]=newvalue;
    n++;
    printf("\narray after insertion");
    for ( i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }

    }
    else{
        printf("invalid position!!");


    }
    printf("\n");
    return n ;


}
int deletion(int a[], int n , int loc)
{
    int i ;
    
    for ( i = loc-1; i <n-1; i++)
    {
        a[i]=a[i+1];

    }
    n--;
    printf("\narray after deletion");
    for ( i = 0; i < n; i++)
    {
        printf(" %5d",a[i]);
    }
    printf("\n");
    return n ;
}


int search(int a[] , int n , int element )
{
    int i ;
    
    for ( i = 0; i < n ; i++)
    {
        if (a[i]==element)
        {
            printf("number %d is found at %d position", element , 1+i);

            return i;
        }
        
        
    }
    printf("Number %d not found in the array\n", element);
    return -1; //
    
    
}

