//combining pattern 7b and pattern 8
//both upper and lower triangle

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        for(int j=0;j<(i*2)+1;j++)
        {
            printf("*");
        }
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        for(int j=0;j<(i*2)-1;j++)
        {
            printf("*");
        }
        for(int j=0;j<n-i;j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}