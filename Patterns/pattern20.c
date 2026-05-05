/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("*");
        }
        for(int j=0;j<(i*2)-2;j++)
        {
            printf(" ");
        }
        for(int j=0;j<=n-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=1;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            printf("*");
        }
        for(int j=0;j<(i*2);j++)
        {
            printf(" ");
        }
        for(int j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}