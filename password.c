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
