/*
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA
*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        char sum='A';
        for(int j=n-1;j>i;j--)
        {
            printf(" ");

        }
        int br=((i*2)+1)/2; //breakpoint where the alphabets reversed
        for(int k=1;k<=((i*2)+1);k++)
        {
            printf("%c",sum);
            if(k<=br)
            {
                sum++;
            }
            else{
                sum--;
            }
            

        }
        for(int j=n-1;j>i;j--)
        {
            printf(" ");

        }
        printf("\n");
    }
}