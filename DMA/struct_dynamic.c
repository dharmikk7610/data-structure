#include<stdio.h>
#include<stdlib.h>

struct student{
   int id;
   char name[20];
};

int main()
{
    struct student *s1;

    // Allocate memory for the student structure
    s1 = (struct student *)malloc(sizeof(struct student));

    if (s1 == NULL) {
        printf("Memory allocation failed");
        return 1;  // Exit if memory allocation fails
    }

    printf("\nEnter a student id: ");
    scanf("%d", &s1->id);  // Use arrow operator to access members via pointer

    printf("\nEnter a student name: ");
    scanf("%s", s1->name);  // Use %s to read the string

    printf("\nStudent ID: %d", s1->id);
    printf("\nStudent Name: %s", s1->name);

    // Free the allocated memory
    free(s1);

    return 0;
}
