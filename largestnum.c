#include <stdio.h>
int main()
{
    int n ,i, largest,num , a[100];

    printf("enter n :");
    scanf("%d", &n);

    printf("enter elements:");
    for (  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);

    }
    largest=a[0];
    for ( i = 1; i < n; i++)
    {
        
        if (a[i]>largest)
        {
            largest=a[i];
        }

    }
    printf("largest num is %d ", largest);
    
    

}