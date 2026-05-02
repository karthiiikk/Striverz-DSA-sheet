//upper trianlge
#include<stdio.h>

void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=n+i;j>=1;j--)
        {
            if(j>(i*2)+1)
            {
                printf("_");
            }
            else{
            printf("*");
            }
        }

        printf("\n");
    }
}