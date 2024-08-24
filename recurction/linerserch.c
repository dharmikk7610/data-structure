#include <stdio.h>
#define SIZE 5

int a[SIZE], nu;

int search(int a[], int size, int nu)
{
    if (size == 0)
    {
        return 0;
    }
    else if (a[size - 1] == nu)
    {
        return 1; // Return 1 if the number is found
    }
    else
    {
        return search(a, size - 1, nu); // Decrease the size and call recursively
    }
}

void main()
{
    int a[SIZE] = {1, 3, 5, 4, 2};
    printf("Enter a number to search: ");
    scanf("%d", &nu);
    int ans = search(a, SIZE, nu);

    if (ans)
    {
        printf("Number %d is found in the array.\n", nu);
    }
    else
    {
        printf("Number %d is not found in the array.\n", nu);
    }
}
