/*
543333345
543222345
543212345
543222345
543333345
544444445
555555555
*/
#include<stdio.h>
#define min(a,b) ((a>b)?b:a)
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
        int top=i;
        int bottom=(2*n-1-1)-i;
        int left=j;
        int right=(2*n-1-1)-j;
        printf("%d",n-min(min(top,bottom),min(left,right)));
        }
        printf("\n");
    }
}