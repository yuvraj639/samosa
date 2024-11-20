
#include <stdio.h>

int main() {
    //greetings
    char name[50]; // Buffer to store the name
    printf("Please enter your name: ");
    scanf("%49s", name); // Read the name, limit input to 49 characters
    //here is what we serve with price
    printf("Hello, %s! here is a list of what we serve\n1. Chai with Biscuits 10rs\n2. Samosa 20rs\n3.Kachori 20rs\n ", name);
    return 0;
}

//what would you like to have
//user gives order
//anything else
//make recipt with a thanks note
//
