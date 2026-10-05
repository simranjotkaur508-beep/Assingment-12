#include<stdio.h>
int main()
{
    int a=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while(a<=n)
    {
        printf("\n%d",a*a*a);
        a++;
    }
    return 0;
}