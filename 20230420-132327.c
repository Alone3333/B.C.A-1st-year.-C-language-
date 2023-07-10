#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct student s[n];
    
    for(i=0; i<n; i++) {
        printf("\nEnter details of student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollno);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    
    printf("\nDetails of all students:\n");
    for(i=0; i<n; i++) {
        printf("\nRoll Number: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
    
    return 0;
}
    