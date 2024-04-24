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
