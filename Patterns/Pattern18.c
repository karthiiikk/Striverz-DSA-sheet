/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(char j='A'+n-i;j<='A'+n-1;j++)
        {
           printf("%c ",j);
        }
        printf("\n");

    }
}