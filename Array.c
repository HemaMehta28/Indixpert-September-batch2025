#include<stdio.h>
int main()
{
    int num[3];
    int temp;
    for(int i=0;i<3;i++)
    {
        printf("Enter the element %d :",i+1);
        scanf("%d",&num[i]);
    }
     printf("Before Swapping\n");
     for(int i=0;i<3;i++)
    {
         printf("%d,",num[i]);   
    }
        temp=num[0];
        num[0]=num[2];
         num[2]=num[1];
        num[1]=temp;
        printf("\nAfter Swapping\n");
        for(int i=0;i<3;i++)
        {
         printf("%d,",num[i]);
        }
       
}