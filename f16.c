#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    if(n%2==0)
    printf("The value is even number");
    if(n%2!=0)
    printf("The value is odd number ");
    return 0;
}