/*
A 
B B 
C C C 
D D D D 
E E E E E 
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    char sum='A';
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
        printf("%c ",sum);
        }
        sum++;
        printf("\n");

    }
}