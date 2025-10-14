#include<stdio.h>
int VowelChar(char name[]) 
{
    int vowels = 0;
    for (int i = 0; name[i]; i++) 
    {
        switch(name[i])
        {
         case 'a':
         case 'A':
         case 'E':
         case 'e':
         case 'I':
         case 'i':
         case 'o':
         case 'O':
         case 'U':
         case 'u':
         {
            vowels++;
            break;
         }
     }
     }     
    return vowels;
}

int main()
{
    char name[20];
    printf("Please enter your name: ");
    scanf(" %[^\n]", name);
    printf("Your name is: %s\n", name);
    printf("Number of vowels in your name: %d\n",VowelChar(name));
    return 0;
}