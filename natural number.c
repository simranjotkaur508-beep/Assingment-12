#include <stdio.h>
int main()
{
    int a,b=1;
    printf("enter a number");
    scanf("%d",&a);
    while(b<=a)
    {
        printf("\n%d",a);
        a++;

    }
    return 0;
}