#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter string to be reversed:");
    scanf("%s",&str);

    printf("reversed string is %s", strrev(str));
}
