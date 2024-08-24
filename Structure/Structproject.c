#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 10

int no;
struct Product {
    int pid;
    char pname[20];
    char category[20];
    int price;
    int qty;
} p1[size];

void Add_product()
{
    printf("How many products to add: ");
    scanf("%d", &no);

    if (no <= 10) {
        for (int i = 0; i < no; i++) {
            printf("\nEnter product id, product name, category, price, quantity: ");
            scanf("%d %s %s %d %d", &p1[i].pid, p1[i].pname, p1[i].category, &p1[i].price, &p1[i].qty);
        }
    } else {
        printf("You cannot add more than 10 products.\n");
    }
}

void Print_product()
{
    for (int i = 0; i < no; i++) {
        printf("\nDetails of products...\n");
        printf("\nProduct ID: %d", p1[i].pid);
        printf("\nProduct Name: %s", p1[i].pname);
        printf("\nProduct Category: %s", p1[i].category);
        printf("\nProduct Price: %d", p1[i].price);
        printf("\nProduct Quantity: %d", p1[i].qty);
    }
}

void search_pc()
{
    int index = -1;
    char scategory[20];
    fflush(stdin);
    printf("\nEnter a category to search: ");
    scanf("%s", scategory);

    for (int i = 0; i < no; i++) {
        if (strcmp(scategory, p1[i].category) == 0) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("\nThis category product not found.\n");
    } else {
        printf("%s found at %d index.\n", scategory, index);
    }
}

void search_pi()
{
    int id;
    printf("\nEnter a search ID: ");
    scanf("%d", &id);

    int min = 0, max = no - 1, index = -1;
    int mid;

    while (min <= max) {
        mid = (min + max) / 2;

        if (p1[mid].pid == id) {
            index = mid;
            break;
        } else if (p1[mid].pid < id) {
            min = mid + 1;
        } else {
            max = mid - 1;
        }
    }
    if (index == -1) {
        printf("Product not found.\n");
    } else {
        printf("Product found at index %d.\n", index);
    }
}

int main()
{
    while (1) {
        int choice;
        printf("\n1...Add product");
        printf("\n2...Print all products");
        printf("\n3...Search by product category");
        printf("\n4...Search by product ID");
        printf("\n5...Exit");
        printf("\nEnter a choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Add_product();
                break;

            case 2:
                Print_product();
                break;

            case 3:
                search_pc();
                break;

            case 4:
                search_pi();
                break;

            case 5:
                exit(0);
        }
    }
    return 0;
}
