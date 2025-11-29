#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    float marks;
    char name[20];
};
int main() {
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));  
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    ptr->roll = 101;
    ptr->marks = 88.50;
    snprintf(ptr->name, sizeof(ptr->name), "Kavya");
    printf("Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    free(ptr);
    return 0;
}
