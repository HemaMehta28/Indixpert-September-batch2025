#include<stdio.h>
int add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("Addition of Two Numbers:%d\n\n",sum);
}
int Subtract(int a,int b)
{
    int subtract;
    subtract=a-b;
    printf("Subtration of Two Numbers:%d\n\n", subtract);
}
int multiply(int a,int b)
{
    int multiply;
    multiply=a*b;
    printf("Multiplication of Two Numbers:%d\n\n", multiply);
}
int Division(int a,int b)
{
    int Division;
    Division=a/b;
    printf("Division of Two Numbers:%d\n\n",Division);
}


int main()
{
    int a,b;
    int choice;
    printf("Please Enter the value of a :");
    scanf("%d",&a);
     printf("\nplease Enter the value of b :");
    scanf("%d",&b);
    printf("\n****************Menu******************");
    printf("\n1: Addition\n");
    printf("2: Subtration\n");
    printf("3: Multiplication\n");
    printf("4: Division\n");
    printf("5: Exit\n\n");
    do
    {
    printf("Please enter the choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        add(a,b);
    }
    else if(choice==2)
    {
        Subtract(a,b);
    }
     else if(choice==3)
    {
        multiply(a,b);
    }
     else if(choice==4)
    {
        Division(a,b);
    }
     else if(choice==5)
    {
         printf("\n******************************Exit*******************************\n\n");
        break;
    }
    
    else
    {
        printf("No operation ! please select again\n\n");
     }
    
    } while (1);
    
    return 0;
}
