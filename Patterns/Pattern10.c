//both upper and lower right angle triangle
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
        printf("* ");
        }
        printf("\n");

    }
    for(int i=n-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
        printf("* ");
        }
        printf("\n");

    }
}