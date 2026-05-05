/*
ABCDE
ABCD
ABC
AB
A
*/

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        char sum='A';
        for(int j=0;j<i;j++)
        {
        printf("%c",sum++);
        }
        printf("\n");

    }
}