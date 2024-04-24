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
    void displayMenu(struct GroceryItem items[], int size) {
    printf("Menu:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d. %s - $%.2f\n", i + 1, items[i].name, items[i].price);
    }
}

