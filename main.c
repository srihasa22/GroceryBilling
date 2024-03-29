#include <stdio.h>
#include <string.h>

#include "items.h"
#include "customer.h"

// Function to display the bill
void display(struct item items[], int size, struct customer customer) {
    int total = 0;

    printf("\n\n\n\n");
    printf("\t srihasa store \n");
    printf("\t-------------- \n");
    printf("\n");
    printf("Name : %s \t Address : %s \n", customer.name, customer.address);
    printf("\n");

    for (int i = 0; i < size; i++) {
        printf("Id : %d\t", items[i].id);
        printf("Name : %s\t", items[i].itemName);
        printf("Price : %d\n", items[i].price);
        printf("------------------------------------------------\n");
        total += items[i].price;
    }

    printf("\t\tTotal : %d\n", total);
    printf("\n\n");
    printf("\t Thanks for visiting \n");
    printf("\n\n");
}

int main() {
    printf("Hello.......\n");

    struct customer customer;
    int totalItems;

    printf("Enter your name \t");
    scanf(" %s", &customer.name);
    printf("Enter your address \t");
    scanf(" %s", &customer.address);
    printf("Enter total items \t");
    scanf("%d", &totalItems);

    // Array of items
    struct item items[totalItems];

    // Insert items
    for (int i = 0; i < totalItems; i++) {
        items[i].id = i + 1;
        printf("Enter %d item name \t", i + 1);
        scanf(" %s", &items[i].itemName);
        printf("Enter price \t");
        scanf("%d", &items[i].price);
    }

    // Call display function
    display(items, totalItems, customer);

    return 0;
}
