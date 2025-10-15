#include<stdio.h>

int number[5];
int index_num=4;

int Func() 
{
    for(int i=0;i<5;i++) 
    {
        printf("\nEnter the number %d: ", i+1);
        scanf("%d",&number[i]);
    }
}

int displayMenu() 
{
    printf("\n\n***************************Menu********************************");
    printf("\n1: Display all record\n");
    printf("2: Delete\n");
    printf("3: Exit\n\n");
}

int display_all_record() 
{
    for(int i=0;i<=index_num;i++)
     {
        printf("\n Number %d : %d",i+1,number[i]);
    }
}

int delete() 
{
    if(index_num >= 0) 
    {
        printf("\nNumber %d deleted successfully.", number[index_num]);
        index_num--;
    }
}

void Menu() 
{
    int choice;
    do {
        displayMenu();
        printf("Please enter the choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                display_all_record();
                break;
            case 2:
                delete();
                break;
        case 3:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice. Please choose again.\n");
        }
         if(choice == 3) 
        {
            break;
        }
    } while(1);
}

int main()
 {
    Func();
    Menu();
    return 0;
}