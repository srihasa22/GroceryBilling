#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to hold grocery item information
struct GroceryItem {
    char name[50];
    float price;
};

void displayMenu(struct GroceryItem items[], int size);
void getCustomerDetails(char *name, char *email, char *address);
int login(const char *username, const char *password, const char* const expectedUsername, const char* const expectedPassword);

int main() {
    // Login credentials
    const char* const USERNAME = "admin";
    const char* const PASSWORD = "password";

    char username[20];
    char password[20];

    printf("Welcome to our grocery store!\n");

    // Login
    printf("Please login to continue.\n");
    printf("Username: ");
    scanf("%19s", username); // Limit input to prevent buffer overflow
    printf("Password: ");
    scanf("%19s", password); // Limit input to prevent buffer overflow

    if (!login(username, password, USERNAME, PASSWORD)) {
        printf("Login failed. Exiting...\n");
        return 1;
    }

    struct GroceryItem groceryItems[5] = {{"Apple", 1.00}, {"Banana", 0.50}, {"Orange", 0.75}, {"Potato", 1.25}, {"Carrot", 0.89}};
    int choice;
    int quantity;
    float total = 0.0;
    char name[50];
    char email[100];
    char address[100];

    displayMenu(groceryItems, 5);

    printf("\nEnter your choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if (choice >= 1 && choice <= 5) {
        total += groceryItems[choice - 1].price * quantity;
        printf("Added %s to your cart.\n", groceryItems[choice - 1].name);
    } else {
        printf("Invalid choice. Please try again.\n");
        return 1;
    }

    getCustomerDetails(name, email, address);

    printf("\n\n--------- Order Summary ---------\n");
    printf("Customer Name: %s\n", name);
    printf("Customer Email: %s\n", email);
    printf("Customer Address: %s\n", address);
    printf("Total: $%.2f\n", total);

    return 0;
}

void displayMenu(struct GroceryItem items[], int size) {
    printf("Menu:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d. %s - $%.2f\n", i + 1, items[i].name, items[i].price);
    }
}

void getCustomerDetails(char *name, char *email, char *address) {
    printf("\nEnter your name: ");
    scanf("%49s", name); // Limit input to prevent buffer overflow
    printf("Enter your email: ");
    scanf("%99s", email); // Limit input to prevent buffer overflow
    printf("Enter your address: ");
    scanf("%99s", address); // Limit input to prevent buffer overflow
}

// Simple login function, returns 1 if login successful, 0 otherwise
int login(const char *username, const char *password, const char* const expectedUsername, const char* const expectedPassword) {
    // Implement your login logic here
    // For simplicity, let's assume the expected username and password are provided as arguments
    if (strcmp(username, expectedUsername) == 0 && strcmp(password, expectedPassword) == 0) {
        return 1; // Login successful
    } else {
        return 0; // Login failed
    }
}
