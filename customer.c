getCustomerDetails(name, email, address);

    printf("\n\n--------- Order Summary ---------\n");
    printf("Customer Name: %s\n", name);
    printf("Customer Email: %s\n", email);
    printf("Customer Address: %s\n", address);
    printf("Total: $%.2f\n", total);

    return 0;
}
void getCustomerDetails(char *name, char *email, char *address) {
    printf("\nEnter your name: ");
    scanf("%49s", name); // Limit input to prevent buffer overflow
    printf("Enter your email: ");
    scanf("%99s", email); // Limit input to prevent buffer overflow
    printf("Enter your address: ");
    scanf("%99s", address); // Limit input to prevent buffer overflow
}