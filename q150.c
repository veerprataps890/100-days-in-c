#include <stdio.h>
struct Student {
    int roll;
    float marks;
    char name[20];
};
int main() {
    struct Student s;
    struct Student *ptr = &s;
    ptr->roll = 101;
    ptr->marks = 92.5;
    snprintf(ptr->name, sizeof(ptr->name), "Kavya");
    printf("Student Details:\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
