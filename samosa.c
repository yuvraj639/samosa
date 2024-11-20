#include<stdio.h>
#include<string.h>
int main() 
{
    char name[50]; 
    
   
    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin); 
    
    
    name[strlen(name) - 1] = '\0'; 
    
    
    printf("\nHello, %s! Here is the list of what we serve:\n", name);
    printf("-------------------------------------------------\n");
    printf("1. Chai with Biscuits\t\t10 Rs\n");
    printf("2. Samosa\t\t\t20 Rs\n");
    printf("3. Kachori\t\t\t20 Rs\n");
    printf("-------------------------------------------------\n");

    
    int choice;
    printf("\nPlease select an item by number (1-3): ");
    scanf("%d", &choice);
    
    
    switch (choice) {
        case 1:
            printf("You chose Chai with Biscuits!\n Enjoy your snack.\n");
            break;
        case 2:
            printf("You chose Samosa!\n Enjoy your snack.\n");
            break;
        case 3:
            printf("You chose Kachori!\n Enjoy your snack.\n");
            break;
        default:
            printf("Invalid choice. Please choose a valid option (1-3).\n");
            break;
    }

    return 0;
}
