#include <stdio.h>
int main(){
    int arr[100];
    int i,j, n ,result;
    printf("enter n:");
    scanf("%d", &n);

    printf("enter elements: ");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d",arr[i] );
    }
    result=1;
    for ( j = 0; j < n; j++)
    {
        
        result=result*arr[j];
        
    }
    printf("multiplication of arrays:%d", result);
    return 0;
}